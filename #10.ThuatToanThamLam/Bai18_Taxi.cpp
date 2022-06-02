// Có N nhóm học sinh, mỗi nhóm học sinh có từ 1 tới 4 người.
// Các nhóm học sinh này dự định sẽ đi thăm quan vườn bách thú bằng những chiếc xe taxi, mỗi xe taxi trở được tối đa 4 người.
// Hãy tìm số lượng taxi tối thiểu để có thể trở hết N nhóm học sinh này, biết rằng những học sinh ở cùng 1 nhóm sẽ đi cùng 1 taxi

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int cnt[5] = { 0 };
    int ans = 0; // tinh so tac xi
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
        if (a[i] == 4) { // nhom 4 nguoi cho vao 1 taxi
            ans++;
        }
    }
    ans += cnt[2] / 2; // nhom 2 nguoi thi 2 nhom (2 nguoi) vao 1 xe
    cnt[2] %= 2; // co the du 1 nhom 2
    ans += min(cnt[1], cnt[3]); // nhom 1 nguoi co the ghep voi nhom 3 nguoi; (so luong nhom 1 nguoi va nhom 3 nguoi co the khac nhau2);
    if (cnt[1] > cnt[3]) {
        cnt[1] -= cnt[3];
        cnt[3] = 0;
    } else if (cnt[1] < cnt[3]) {
        cnt[3] -= cnt[1];
        cnt[1] = 0;
    } else {
        cnt[1] = cnt[3] = 0;
    }
    ans += cnt[3];
    if (cnt[2] == 1 && cnt[1] != 0) {
        ans++;
        if (cnt[1] == 1) {
            cnt[1] -= 1;
        } else {
            cnt[1] -= 2;
        }
    } else {
        ans += cnt[2];
    }
    while (cnt[1] >= 4) {
        ans++;
        cnt[1] -= 4;
    }
    if (cnt[1] != 0) {
        ans++;
    }
    cout << ans << endl;
    return 0;
}