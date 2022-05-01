#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
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
