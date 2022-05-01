#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    map<char, int> mp;
    for(char x : s) mp[x]++;
    long long ans = s.size();
    for(auto it : mp){
        ans += (1ll * it.second * (it.second - 1) / 2);
    }
    cout << ans << endl;
    return 0;
}
