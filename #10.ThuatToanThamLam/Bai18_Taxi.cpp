#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int cnt[5] = { 0 };
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
        if (a[i] == 4) {
            ans++;
        }
    }
    ans += cnt[2] / 2;
    cnt[2] %= 2; // co the du 1 nhom 2
    ans += min(cnt[1], cnt[3]); // nhom 1 nguoi co the ghep voi nhom 3 nguoi;
    
    return 0;
}