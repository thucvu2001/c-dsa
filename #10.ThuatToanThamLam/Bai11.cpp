// Cho xâu ký tự S. Ta gọi giá trị của xâu S là tổng bình phương số lần xuất hiện mỗi ký tự trong S.
// Hãy tìm giá trị nhỏ nhất của xâu S sau khi thực hiện K lần loại bỏ ký tự.

#include <bits/stdc++.h>
using namespace std;

int k;
string s;
priority_queue<long long> q;

int main()
{
    cin >> k;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++) {
        mp[s[i]]++;
    }
    for (pair<char, int> i : mp) {
        q.push(i.second);
    }
    while (k) {
        long long top = q.top();
        q.pop();
        top--;
        q.push(max(0ll, top));
        k--;
    }
    long long ans = 0;
    while (!q.empty()) {
        ans += q.top() * q.top();
        q.pop();
    }
    cout << ans << endl;
    return 0;
}