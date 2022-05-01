#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    set<char> se1;
    set<char> se2;
    set<char> se3;
    for (int i = 0; i < s1.size(); i++) {
        se1.insert(s1[i]);
        se3.insert(s1[i]);
    }
    for (char x : s2) {
        se2.insert(x);
        se3.insert(x);
    }
    for (auto it : se1) {
        if (se2.find(it) != se2.end()) {
            cout << it;
        }
    }
    cout << endl;
    for (auto it : se3) {
        cout << it;
    }
    return 0;
}
