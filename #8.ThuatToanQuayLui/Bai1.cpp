#include <bits/stdc++.h>
using namespace std;

int n, k, s, ans = 0;

void Try(int pos, int cnt, int sum)
{
    for (int j = pos; j <= n; j++) {
        if (sum + j <= s) {
            sum += j;
            cnt++;
            if (sum == s && cnt == k) {
                ans++;
            } else {
                Try(j + 1, cnt, sum);
            }
            sum -= j;
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