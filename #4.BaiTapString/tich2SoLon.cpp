#include <bits/stdc++.h>

using namespace std;

string tong(string a, string b)
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
    return ketQua;
}

string nhan(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    string result = "0";

    for (int i = 0; i < b.length(); i++) {
        string temp = "";
        int digit_b = b[i] - '0';
        int c = 0;
        for (int j = 0; j < a.length(); j++) {
            int digit_a = a[j] - '0';
            int p = digit_a * digit_b + c;
            temp += to_string(p % 10);
            c = p / 10;
        }
        if (c > 0) {
            temp += to_string(c);
        }
        reverse(temp.begin(), temp.end());
        for (int k = 0; k < i; k++) {
            temp += "0";
        }
        result = tong(result, temp);
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        string b = a;
        cout << nhan(a, b) << endl;
    }
    return 0;
}