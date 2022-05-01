#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int x = s[s.size() - 1] - '0';
    if (x % 5 != 0) {
        return false;
    }
    long long ans = 0;
    for (char x : s) {
        ans += x - '0';
    }
    return ans % 3 == 0;
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
