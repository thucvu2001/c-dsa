#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    long long ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans += s[i] - '0';
        ans %= 9;
    }
    return ans == 0;
}

int main()
{
    string s;
    cin >> s;
    if (check(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
