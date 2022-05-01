#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int dem1 = 0, dem2 = 0, dem3 = 0;
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            dem1++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            dem2++;
        } else {
            dem3++;
        }
    }
    cout << dem1 << " " << dem2 << " " << dem3 << endl;
    return 0;
}
