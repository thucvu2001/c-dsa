#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    set<char> se1;
    set<char> se2;
    for (char x : s1) {
        se1.insert(x);
    }
    for (char x : s2) {
        se2.insert(x);
    }
    for (auto i : se1) {
        if (se2.find(i) == se2.end()) {
            cout << i;
        }
    }
    cout << endl;
    for (auto i : se2) {
        if (se1.find(i) == se1.end()) {
            cout << i;
        }
    }
    return 0;
}
