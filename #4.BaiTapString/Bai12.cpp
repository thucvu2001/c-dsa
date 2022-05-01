#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool cmp(string a, string b)
{
    return a.size() < b.size();
}

bool check(string s)
{
    string t = s;
    reverse(begin(s), end(s));
    return s == t;
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s); // truyen s cho stringstream ss
    string tmp;
    vector<string> v;
    set<string> se;
    while (ss >> tmp) {
        if (check(tmp) && se.count(tmp) == 0)
            v.push_back(tmp);
        se.insert(tmp);
    }
    stable_sort(begin(v), end(v), cmp);
    for (string x : v) {
        cout << x << ' ';
    }
}
