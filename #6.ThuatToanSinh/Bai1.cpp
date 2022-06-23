#include <bits/stdc++.h>
using namespace std;

string s;

void sinh()
{
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '1') {
        s[i] = '0';
        i--;
    }
    if (i == -1) {
        cout << s << endl;
    } else {
        s[i] = '1';
        cout << s << endl;
    }
}

int main()
{
    cin >> s;
    sinh();
    return 0;
}