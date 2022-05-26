// Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau.
// Ví dụ N=30 là số Sphenic vì 30 = 2×3×5; N = 60 không phải số Sphenic vì 60 = 2×2×3×5.
// Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Sphenic hay không?

#include <bits/stdc++.h>
using namespace std;

bool solve(long long n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
        }
    }
    if (n != 1) {
        cnt++;
    }
    return cnt == 3;
}

int main()
{
    long long n;
    cin >> n;
    if (solve(n)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}
