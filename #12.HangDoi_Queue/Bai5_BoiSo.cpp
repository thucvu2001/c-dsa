// Cho số tự nhiên N. Hãy tìm số nguyên dương X nhỏ nhất được tạo bởi số 8 và số 0 chia hết cho N. Ví dụ với N = 5 ta sẽ tìm ra X = 80.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long kq[205];
    vector<long long> ans;
    queue<long long> Q;
    Q.push(8);
    while (ans.size() != 500) {
        int top = Q.front();
        Q.pop();
        Q.push(top * 10);
        Q.push(top * 10 + 8);
        ans.push_back(top * 10);
        ans.push_back(top * 10 + 8);
    }
    for (int i = 1; i <= 200; i++) {
        for (int j = 0; j <= ans.size(); j++) {
            if (ans[j] % i == 0) {
                kq[i] = ans[j];
                break;
            }
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << kq[n] << endl;
    }
    return 0;
}