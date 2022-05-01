#include <bits/stdc++.h>
using namespace std;
bool check(string s, int k)
{
    k = k + 1;
    for (int i = s.size() - 1; i >= s.size() - k + 1; i--) {
        if (s[i] == '1') {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    int k;
    cin >> k;
    if (check(s, k)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
