#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    long long ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            ans += s[i] - '0';
        }
    }
    cout << ans << endl;
    return 0;
}
