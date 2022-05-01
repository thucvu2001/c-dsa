#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string t = "python";
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t[j]) {
            j++;
        }
        if (j == 6) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
