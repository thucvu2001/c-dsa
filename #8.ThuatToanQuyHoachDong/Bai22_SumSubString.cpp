// Cho một số tự nhiên N được biểu diễn như một xâu kí tự, bạn hãy tính tổng của tất cả các số tạo bởi các xâu con liên tiếp của N,
// ví dụ N = 235 thì ta có tổng = 2 + 3 + 5 + 23 + 35 + 235.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    long long f[n] = { 0 };
    f[0] = s[0] - '0';
    long long ans = 0;
    for (int i = 1; i < n; i++) {
        f[i] = f[i - 1] * 10 + (s[i] - '0') * (i + 1);
    }
    for (int i = 0; i < n; i++) {
        ans += f[i];
    }
    cout << ans << endl;
    return 0;
}