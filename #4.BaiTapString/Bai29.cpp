#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    s = s + "a";
    long long ans = 0, num = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            num = num * 10 + s[i] - '0';
        } else {
            ans += num;
            num = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
