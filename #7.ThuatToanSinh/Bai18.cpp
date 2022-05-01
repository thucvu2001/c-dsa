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
    while (i >= 0 && s[i] == '8') {
        s[i] = '0';
        i--;
    }
    if (i == -1) {
        check = false;
    } else {
        s[i] = '8';
    }
}

int main()
{
    n = 19;
    khoiTao();
    long long res[501];
    check = true;
    while (check) {
        v.push_back(s);
        sinh();
    }
    v.erase(v.begin());
    int dem = 0;
    for (int i = 1; i <= 500; i++) {
        for (string x : v) {
            if (stoll(x) % i == 0) {
                res[i] = stoll(x);
                dem++; // dem xem co du so luong caa boi cua 500 so
                break;
            }
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << res[x] << endl;
    }
    return 0;
}