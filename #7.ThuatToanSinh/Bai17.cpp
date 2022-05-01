#include <bits/stdc++.h>
using namespace std;

string s;
bool check;

void next()
{
    int i = s.length() - 2;
    while (i >= 0 && (s[i] - '0') >= (s[i + 1] - '0')) {
        i--;
    }
    if (i == -1) {
        check = false;
    } else {
        int j = s.size() - 1;
        while (s[i] - '0' >= s[j] - '0') {
            j--;
        }
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
    }
}

int main()
{
    cin >> s;
    check = true;
    next();
    if (check == false) {
        cout << "NOT EXIST" << endl;
    } else {
        cout << s << endl;
    }
    return 0;
}