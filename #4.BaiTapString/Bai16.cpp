#include <bits/stdc++.h>
using namespace std;

void chuanHoa(string& s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

int main()
{
    string s, t;
    getline(cin, s);
    cin >> t;
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while (ss >> tmp) {
        chuanHoa(tmp);
        v.push_back(tmp);
    }
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    if (t[2] != '/') {
        t = "0" + t;
    }
    if (t[5] != '/') {
        t.insert(3, "0");
    }
    cout << t << endl;
    return 0;
}
