// hãy đếm tất cả các số có ĐÚNG ba ước số không vượt quá n

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
    long long n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (prime[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
