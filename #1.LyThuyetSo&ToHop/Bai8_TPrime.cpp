#include <bits/stdc++.h>
using namespace std;

// liệt kê tất cả các số có ĐÚNG ba ước số không vượt quá n

bool prime[1000001];
void sang()
{
    for (int i = 0; i <= 1000000; i++) {
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i <= sqrt(1000000); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 1000000; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main()
{
    sang();
    long long n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) {
        if (prime[i]) {
            cout << 1ll * i * i << " ";
        }
    }
    return 0;
}
