#include <bits/stdc++.h>
using namespace std;

// tinh toan thong qua ky tu co tan suat nhieu nhat
int main()
{
    string s;
    cin >> s;
    int cnt[256] = { 0 };
    for (char x : s) {
        cnt[x]++;
    }
    int res = 0;
    for (int i = 0; i < 256; i++) {
        res = max(res, cnt[i]);
    }
    if (res <= s.size() - res + 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}