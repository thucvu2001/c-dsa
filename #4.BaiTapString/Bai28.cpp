#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    if (a.size() != b.size()) {
        return a.size() > b.size();
    } else {
        return a > b;
    }
}

int main()
{
    string s;
    getline(cin, s);
    s = s + "a";
    vector<string> v;
    string num = "";
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            num += s[i];
        } else {
            while (num.size() > 1 && num[0] == '0') {
                num.erase(0, 1);
            }
            v.push_back(num);
            num = "";
        }
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0] << endl;
    return 0;
}
