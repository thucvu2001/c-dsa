#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        res = res * 10 + (s[i] - '0');
        res %= 11;
    }
    if (res == 0) {
        return true;
    }
    return false;
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
