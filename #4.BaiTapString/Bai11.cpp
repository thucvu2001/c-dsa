#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    int len1 = a.length();
    int len2 = b.length();
    if (len1 != len2) {
        return len1 < len2;
    } else {
        return a < b;
    }
}

int main()
{
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp) {
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    sort(begin(v), end(v), cmp);
    for (auto x : v) {
        cout << x << " ";
    }
    return 0;
}
