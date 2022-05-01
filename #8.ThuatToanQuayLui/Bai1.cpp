#include <bits/stdc++.h>
using namespace std;

int n, k, s, ans = 0;

void Try(int sum, int cnt, int pos)
{
    for (int i = pos; i <= n; i++) {
        if (sum + i <= s) {
            sum += i;
            cnt++;
            if (sum == s && cnt == k) {
                ans++;
            } else {
                Try(sum, cnt, i + 1);
            }
            sum -= i;
            --cnt;
        }
    }
}

int main()
{
    cin >> n >> k >> s;
    Try(0, 0, 1);
    cout << ans << endl;
    return 0;
}