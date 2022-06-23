#include <bits/stdc++.h>
using namespace std;

vector<string> v;
int n;
string s;
bool check;
long long res[300];

void khoiTao()
{
    s = string(n, '0');
}

void sinh()
{
    int i = n - 1;
    while (i >= 0 && s[i] == '8') {
        s[i] = '0';
        i--;
    }
    if (i == 0) {
        check = false;
    } else {
        s[i] = '8';
    }
}

int main()
{
    n = 19;
    khoiTao();
    check = true;
    while (check) {
        v.push_back(s);
        sinh();
    }
    v.erase(v.begin());
    for (int i = 0; i < 300; i++) {
        for (string x : v) {
            if (stoll(x) % i == 0) {
                res[i] = stoll(x);
                break;
            }
        }
    }
    int t; cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        cout << res[x] << endl;
    }
    return 0;
}