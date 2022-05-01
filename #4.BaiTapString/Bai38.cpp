#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    if (s.size() == 1) {
        if (s[0] == '0') {
            return true;
        } else {
            return false;
        }
    }
    string t = s.substr(s.size() - 2, 2);
    int ans = stoi(t);
    return ans % 25 == 0;
}
int main()
{
    string s;
    getline(cin, s);
    if (check(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
