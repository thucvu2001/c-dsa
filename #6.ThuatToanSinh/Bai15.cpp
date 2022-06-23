#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> se;
    for (char x : s) {
        se.insert(x);
    }
    string tmp = "";
    for (char x : se) {
        tmp += x;
    }
    do {
        cout << tmp << endl;
    } while (next_permutation(tmp.begin(), tmp.end()));
    return 0;
}