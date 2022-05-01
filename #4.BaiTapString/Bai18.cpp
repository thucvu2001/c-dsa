#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while (ss >> tmp) {
            v.push_back(tmp);
        }
        int n = v.size();
        cout << v[n - 2];
        for (int i = 0; i < n - 2; i++) {
            cout << v[i][0];
        }
        cout << "@xyz.edu.vn" << endl;
        string ns = v[n - 1];
        stringstream ss1(ns);
        string num;
        while (getline(ss1, num, '/')) {
            if (num[0] == '0') {
                cout << num[1];
            } else {
                cout << num;
            }
        }
        cout << endl;
    }
    return 0;
}
