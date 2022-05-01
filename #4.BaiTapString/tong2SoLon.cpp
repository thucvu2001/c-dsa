#include <bits/stdc++.h>
using namespace std;

void tong(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while (a.size() < b.size()) {
        a += "0";
    }
    while (b.size() < a.size()) {
        b += "0";
    }
    string ketQua = "";
    int nho = 0;
    for (int i = 0; i < a.size(); i++) {
        int tmp = a[i] - '0' + b[i] - '0' + nho;
        if (tmp > 9) {
            nho = 1;
        } else {
            nho = 0;
        }
        string s = to_string(tmp % 10);
        ketQua += s;
    }
    if (nho == 1) {
        ketQua += "1";
    }
    reverse(ketQua.begin(), ketQua.end());
    cout << ketQua << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        tong(a, b);
    }
    return 0;
}