#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    if (s.size() == 1) {
        int a = s[0] - '0';
        return a % 4 == 0;
    }
    string t = s.substr(s.size() - 2, 2);
    int x = stoi(t);
    return x % 4 == 0;
}

int main()
{
    string s;
    getline(cin, s);
    if (check(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
