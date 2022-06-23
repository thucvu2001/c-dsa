// Cho xâu ký tự S[] bao gồm các ký tự in hoa [A, B, … ,Z].
// Ta định nghĩa giá trị của xâu S[] là tổng bình phương số lần xuất hiện mỗi ký tự trong xâu.
// Ví dụ với xâu S[] = “AAABBCD” ta có F(S) = 3^2 + 2^2 + 1^2 + 1^2 = 15.
// Hãy tìm giá trị nhỏ nhất của xâu S[] sau khi loại bỏ K ký tự trong xâu.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int k;
        string s;
        priority_queue<long long> q;
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
    }

    return 0;
}