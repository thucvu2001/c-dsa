#include <bits/stdc++.h>
using namespace std;

bool check;
int n, k;
string s;
vector<string> v;
void khoiTao()
{
    s = string(n, '0');
}

void sinh()
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

bool check1(string s)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cnt++;
        }
    }
    return cnt == k;
}

bool check2(string s)
{
    int dem = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            dem++;
        } else {
            dem = 0;
        }
        if (dem > k) {
            return false;
        }
        if (dem == k) {
            cnt++;
        }
    }
    return cnt == 1; // 1 cum co dung k bit 1 lien tiep
}

int main()
{
    cin >> n >> k;
    khoiTao();
    check = true;
    while (check) {
        v.push_back(s);
        sinh();
    }
    for (string x : v) {
        if (check1(x)) {
            cout << x << " ";
        }
    }
    cout << endl;
    for (string x : v) {
        if (check2(x)) {
            cout << x << " ";
        }
    }
    return 0;
}