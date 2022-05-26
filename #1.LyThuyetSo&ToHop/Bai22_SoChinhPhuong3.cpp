// Đếm số lượng các số chính phương trong đoạn từ a tới b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a, b;
    cin >> a >> b;
    int can1 = sqrt(a);
    if (1ll * can1 * can1 < a) {
        can1++;
    }
    int can2 = sqrt(b);
    cout << can2 - can1 + 1 << endl;
    return 0;
}
