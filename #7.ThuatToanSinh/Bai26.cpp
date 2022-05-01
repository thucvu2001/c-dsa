#include <bits/stdc++.h>
using namespace std;

char c;
string s;
bool ok;

bool isvowel(char c)
{
    return c == 'A' || c == 'E';
}

bool check(string s)
{
    for (int i = 1; i < s.size() - 1; i++) {
        if (isvowel(s[i]) && !isvowel(s[i - 1]) && !isvowel(s[i + 1])) {
            return false;
        }
    }
    return true;
}

void khoiTao()
{
    for (int i = 0; i <= (int)(c - 'A'); i++) {
        s += (char)(i + 65);
    }
}

void sinhHoanVi()
{
    int i = s.length() - 2;
    while (i >= 0 && s[i] > s[i + 1]) {
        i--;
    }
    if (i == -1) {
        ok = false;
    } else {
        int j = s.length() - 1;
        while (s[i] > s[j]) {
            j--;
        }
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
    }
}

int main()
{
    cin >> c;
    khoiTao();
    ok = true;
    while (ok) {
        if (check(s)) {
            cout << s << endl;
        }
        sinhHoanVi();
    }
    return 0;
}