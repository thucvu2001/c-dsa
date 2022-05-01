#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    long long m;
    cin >> m;
    long long ans = 0;
    for (int i = 0; i < n.length(); i++) {
        ans = ans * 10 + n[i] - '0';
        ans %= m;
    }
    cout << ans;
    return 0;
}
