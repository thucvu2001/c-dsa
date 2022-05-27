// Cho N sợi dây, biết chi phí nối 2 sợ dây là tổng độ dài của 2 sợi dây đó. Nhiệm vụ của bạn là nối N sợi dây này thành 1 sao cho chi phí nối dây là nhỏ nhất
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    ll ans = 0;
    while (pq.size() > 1) {
        // chon soi day ngan nhat
        ll top1 = pq.top();
        pq.pop();
        ll top2 = pq.top();
        pq.pop();
        ans += top1 + top2;
        pq.push(top1 + top2);
    }
    cout << ans << endl;
    return 0;
}