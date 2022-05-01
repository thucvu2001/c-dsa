#include <bits/stdc++.h>
using namespace std;

bool nguyenTo(long long n)
{
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool check1(string s)
{
    for (char x : s) {
        if (x != '2' && x != '3' && x != '5' && x != '7') {
            return false;
        }
    }
    return true;
}

bool check2(string s)
{
    long long ans = 0;
    for (char x : s) {
        ans += x - '0';
    }
    return nguyenTo(ans);
}

int main()
{
    string s;
    getline(cin, s);
    if (check1(s) && check2(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
