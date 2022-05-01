#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    map<string, int> mp;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp) {
        mp[tmp]++;
    }
    string res1;
    int max_fre = INT_MIN;
    string res2;
    int min_fre = INT_MAX;
    for (auto it : mp) {
        if (max_fre <= it.second) {
            max_fre = it.second;
            res1 = it.first;
        }
        if (min_fre >= it.second) {
            min_fre = it.second;
            res2 = it.first;
        }
    }
    cout << res1 << " " << max_fre << endl;
    cout << res2 << " " << min_fre << endl;
    return 0;
}
