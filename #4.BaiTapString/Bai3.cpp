#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (int i = 0; i < s.size(); i++) {
        if (mp[s[i]] != 0) {
            cout << s[i] << " " << mp[s[i]] << endl;
            mp[s[i]] = 0;
        }
    }
    return 0;
}
