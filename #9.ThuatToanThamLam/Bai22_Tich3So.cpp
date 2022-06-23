// Cho số nguyên dương N, nhiệm vụ của bạn là kiểm tra xem có thể viết N = a * b * c hay không,
// trong đó a, b, c là 3 số nguyên dương lớn hơn hoặc bằng 2 khác nhau.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> uoc;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            uoc.insert(i);
            n /= i;
            if (uoc.size() == 2) {
                break;
            }
        }
    }
    if (uoc.size() <= 1 || n == 1 || uoc.count(n) == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}