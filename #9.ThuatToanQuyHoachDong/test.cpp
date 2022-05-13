#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, S;
    cin >> n >> S;
    int c[n], cnt[S + 1];
    for (int i = 0; i <= S; i++) {
        cnt[i] = 1e9;
    }
    cnt[0] = 0; // bai toan con: voi so tien la 0 thi 0 can dong tien nao
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    // đối với mỗi đồng xu duyệt số tiền từ 0 -> S;
    for (int i = 0; i < n; i++) { // duyệt đồng xu
        for (int j = 0; j <= S; j++) { // duyệt số tiền
            if (j >= c[i]) { // không xét số tiền nhỏ hơn mệnh giá tờ tiền đang xét
                cnt[j] = min(cnt[j], cnt[j - c[i]] + 1);
            }
        }
    }
    if (cnt[S] == 1e9) {
        cout << "-1" << endl;
    } else {
        cout << cnt[S] << endl;
    }
    return 0;
}