#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> res;
bool check;

void khoiTao()
{
    s = string(n, '6');
}

void next()
{
    int i = n - 1;
    while (i >= 0 && s[i] == '8') {
        s[i] = '6';
        i--;
    }
    if (i == -1) {
        check = false;
    } else {
        s[i] = '8';
    }
}

bool ktra(string s)
{
    if (s[0] == '6')
        return false;
    if (s.back() == '8')
        return false;
    if (s.find("88") != string::npos)
        return false;
    if (s.find("6666") != string::npos)
        return false;
    return true;
}

int main()
{
    cin >> n;
    check = true;
    khoiTao();
    while (check) {
        res.push_back(s);
        next();
    }
    for (string x : res) {
        if (ktra(x)) {
            cout << x << endl;
        }
    }
    return 0;
}