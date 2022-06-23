#include <bits/stdc++.h>
using namespace std;

// su dung sinh tap hop (nhi phan): sinh ra tat ca cac tap con va tinh tong, neu == k thi in ra
int n, k;
string s;
bool check;

vector<vector<int>> ketQua;

void khoiTao()
{
    for (int i = 0; i < n; i++) {
        s += "0";
    }
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

int main()
{
    cin >> n >> k;
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(b, b + n);
    khoiTao();

    check = true;
    while (check) {
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                ans += b[i];
            }
        }
        if (ans == k) {
            vector<int> tmp;
            for (int j = 0; j < s.length(); j++) {
                if (s[j] == '1') {
                    tmp.push_back(b[j]);
                }
            }
            ketQua.push_back(tmp);
        }
        sinh();
    }
    reverse(ketQua.begin(), ketQua.end());
    for (auto it : ketQua) {
        cout << "[";
        for (int i = 0; i < it.size(); i++) {
            cout << it[i];
            if (i != it.size() - 1) {
                cout << " ";
            } else {
                cout << "]";
            }
        }
        cout << endl;
    }
    return 0;
}