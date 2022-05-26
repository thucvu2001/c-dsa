// Với mỗi số nguyên dương N, số M được coi là đặc biệt của N nếu M được tạo ra bằng tổng các luỹ thừa không âm khác nhau của N.
// Ví dụ N = 4 thì M = 17 là số đặc biệt vì 4 ^ 0 + 4 ^ 2 = 17
// Viết chương trình nhập số N và số K.Sau đó in ra số đặc biệt thứ K của N nếu sắp xếp các số đặc biệt của N theo thứ tự tăng dần.
// Kết quả có thể rất lớn, hãy in ra theo modulo(10 ^ 9) + 7.

#include <bits/stdc++.h>
using namespace std;
const int MOD = (int)1e9 + 7;
int main()
{
    int n, k;
    cin >> n >> k;
    long long luyThua = 1;
    long long res = 0;
    while (k != 0) {
        if (k % 2 == 1) {
            res += luyThua;
            res %= MOD;
        }
        luyThua *= n;
        luyThua %= MOD;
        k /= 2;
    }
    cout << res << endl;
    return 0;
}
