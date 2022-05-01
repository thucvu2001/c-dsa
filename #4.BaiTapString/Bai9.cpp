#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    int cnt = 0;
    while (ss >> tmp) {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
