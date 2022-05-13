// ngan hang xyz co N to tien menh gia khac nhau duoc luu vao mang c[], hay tim cach doi so tien S sao cho so to tien la it nhat;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, S;
    cin >> n >> S;
    vector<int> cnt(S + 1, 1e9);
    cnt[0] = 0;
    int c[n]; // số tờ tiền tối thiểu để có thể đổi số tiền là i
    // c[j] : cnt[i - c[j]];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= S; j++) {
            if (j >= c[i]) { // không xét số tiền nhỏ hơn mệnh giá tờ tiền đang xét
                cnt[j] = min(cnt[j], cnt[j - c[i]] + 1);
            }
        }
    }
    if (cnt[S] == 1e9) {
        cout << -1 << endl;
    } else {
        cout << cnt[S] << endl;
    }
    return 0;
}