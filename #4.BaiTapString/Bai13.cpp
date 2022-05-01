#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    map<string, int> mp;
    vector<string> v;
    while (ss >> tmp) {
        mp[tmp]++;
        v.push_back(tmp);
    }
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (string x : v) {
        if (mp[x] != 0) {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}
