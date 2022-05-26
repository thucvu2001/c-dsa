// Bạn đã từng nghe tới Multinomial coefficient bao giờ chưa ?
// Lý thuyết đó có thể giúp bạn giải quyết được bài toán sau đây.Cho một chuỗi,
// nhiệm vụ của bạn là tính toán số lượng các chuỗi khác nhau có thể được tạo bằng cách sử dụng các ký tự của nó.
// Nếu bạn chưa học xâu kí tự, có thể tìm hiểu 1 chút về xâu kí tự sau đó quay trở lại và giải bài tập này nhé !

#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;
long long fac[1000001];
long long powMod(long long a, long long b, long long c)
{
    long long res = 1;
    while (b != 0) {
        if (b % 2 == 1) {
            res *= a;
            res %= c;
        }
        a *= a;
        a %= MOD;
        b /= 2;
    }
    return res;
}
long long inv(long long a, long long m)
{
    return powMod(a, m - 2, m);
}
int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    int n = s.size();
    for (char c : s) {
        mp[c]++;
    }
    fac[0] = 1;
    for (int i = 1; i <= 1000000; i++) {
        fac[i] = i * fac[i - 1];
        fac[i] %= MOD;
    }
    long long ans = fac[n];
    for (auto it : mp) {
        int k = it.second;
        ans *= inv(fac[k], MOD);
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}
