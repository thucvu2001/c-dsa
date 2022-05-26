#include <bits/stdc++.h>
using namespace std;

bool nt[10000001];
void sang()
{
    for (long long i = 0; i <= 10000000; i++) {
        nt[i] = true;
    }
    nt[0] = false;
    nt[1] = false;
    for (long long i = 2; i <= sqrt(10000000); i++) {
        if (nt[i] == true) {
            for (int j = i * i; j <= 10000000; j += i) {
                nt[j] = false;
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
        if (nt[n]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}