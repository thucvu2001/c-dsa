// Một số nguyên dương chẵn >=4 đều có thể biểu diễn dưới dạng tổng của 2 số nguyên tố.
#include <bits/stdc++.h>
using namespace std;

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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i <= n / 2; i++) {
            if (prime[i] && prime[n - i]) {
                cout << i << " " << n - i << endl;
            }
        }
    }
    return 0;
}
