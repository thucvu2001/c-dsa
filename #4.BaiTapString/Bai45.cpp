#include <bits/stdc++.h>
using namespace std;

long long mod(string s, long long m)
{
    long long ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans = ans * 10 + s[i] - '0';
        ans %= m;
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    int x = mod(s, 4);
    if(x == 0){
        cout << "6" << endl;
    } else if(x == 1){
        cout << "8" << endl;
    } else if(x == 2){
        cout << "4" << endl;
    } else {
        cout << "2" << endl;
    }
    return 0;
}
