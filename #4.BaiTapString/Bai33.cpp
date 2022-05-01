#include <bits/stdc++.h>
using namespace std;

bool check1(string s)
{
    for (char x : s) {
        if (x == '6') {
            return true;
        }
    }
    return false;
}
bool check2(string s)
{
    string t = s;
    reverse(begin(t), end(t));
    return s == t;
}

int main()
{
    string s;
    getline(cin, s);
    if (check1(s) && check2(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
