#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    s = s + "1";
    int res = 0, cnt = 1;
    string ans = "";
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
        } else {
            if (cnt > res) {
                res = cnt;
                ans = string(cnt, s[i - 1]);
            } else if (cnt == res) {
                string tmp = string(cnt, s[i - 1]);
                if (tmp > ans) {
                    ans = tmp;
                }
            }
            cnt = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
