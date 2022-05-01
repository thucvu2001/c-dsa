#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    long long lt = 1;
    long long res = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        res += (s[i] - '0') * lt;
        res %= 5;
        lt *= 2;
        lt %= 5;
    }
    return res == 0;
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
