#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = (int)1e9 + 7;

int main()
{
    priority_queue<ll> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    long long ans = 0;
    while (pq.size() > 1) {
        ll top1 = pq.top();
        pq.pop();
        ll top2 = pq.top();
        pq.pop();
        ll sum = top1 + top2;
        ans += (sum % MOD);
        ans %= MOD;
        pq.push(sum);
    }
    cout << ans << endl;
    return 0;
}