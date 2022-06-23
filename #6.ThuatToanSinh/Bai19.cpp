#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> v;
bool check;

void khoiTao()
{
    s = string(n, '0');
}

void sinh()
{
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '1') {
        s[i] = '0';
        i--;
    }
    if (i == -1) {
        check = false;
    } else {
        s[i] = '1';
    }
}
bool doiXung(string s)
{
    string t = s;
    reverse(s.begin(), s.end());
    return t == s;
}
int main()
{
    check = true;
    cin >> n;
    khoiTao();
    while (check) {
        if (doiXung(s)) {
            v.push_back(s);
        }
        sinh();
    }
    for (string x : v) {
        cout << x << endl;
    }
    return 0;
}