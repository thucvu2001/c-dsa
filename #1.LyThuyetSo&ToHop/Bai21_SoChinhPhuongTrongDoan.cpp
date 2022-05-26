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
    for (int i = can1; i <= can2; i++) {
        cout << 1ll * i * i << " ";
    }
    return 0;
}
