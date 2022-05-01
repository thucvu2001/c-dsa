#include <bits/stdc++.h>
using namespace std;

void to_lower(string& s)
{
    for (char& x : s) {
        x = tolower(x);
    }
}
vector<string> split(string s)
{
    vector<string> res;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp) {
        res.push_back(tmp);
    }
    return res;
}
int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);
    to_lower(s);
    to_lower(t);
    vector<string> a1 = split(s);
    vector<string> a2 = split(t);
    map<string, int> mp;
    for (string x : a1) {
        mp[x] = 1;
    }
    for (string x : a2) {
        if (mp[x] == 1) {
            mp[x] = 2;
        }
    }
    for (auto it : mp) {
        if (it.second == 1) {
            cout << it.first << " ";
        }
    }
    return 0;
}
