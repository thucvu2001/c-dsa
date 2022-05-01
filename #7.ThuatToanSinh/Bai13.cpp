#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> res;
bool check;

void khoiTao()
{
    s = string(n, '0');
}

void next()
{
    int i = n - 1;
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

int main()
{
    cin >> n;
    check = true;
    khoiTao();
    while (check) {
        res.push_back(s);
        next();
    }
    res.erase(res.begin());
    vector<string> ans;
    for (string x : res) {
        string tmp = "";
        for (int i = 0; i < n; i++) {
            if (x[i] == '1') {
                tmp += to_string(i + 1) + " ";
            }
        }
        ans.push_back(tmp);
    }
    sort(begin(ans), end(ans));
    for (string x : ans) {
        cout << x << endl;
    }
    return 0;
}