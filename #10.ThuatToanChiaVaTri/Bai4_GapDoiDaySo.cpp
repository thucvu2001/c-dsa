// Một dãy số tự nhiên bắt đầu bởi con số 1 và được thực hiện N-1 phép biến đổi “gấp đôi” dãy số như sau:
// Với dãy số A hiện tại, dãy số mới có dạng A, x, A trong đó x là số tự nhiên bé nhất chưa xuất hiện trong A.
// Ví dụ với 2 bước biến đổi, ta có [1] - [1 2 1] - [1 2 1 3 1 2 1].
// Các bạn hãy xác định số thứ K trong dãy số cuối cùng là bao nhiêu?

#include <bits/stdc++.h>
using namespace std;

// Gap n-1 lan
// so phan tu: 2^(n) - 1
long long solve(long long n, long long k)
{
    // if (n == 0) {
    //     return 1;
    // }
    if (k % 2 == 1) { // o vi tri le thi auto = 1;
        return 1;
    }
    long long lt = (long long)pow(2, n - 1); // tinh so lan gap doi
    if (lt == k) {
        // vd voi k = 4, n = 3 thi so thu 4 trong lan gap doi thu 2^(n-1) la bang nhau (= n = 3)
        //    1                     n = 1 => 0 lan gap doi
        //    1 2 1                 n = 2 => 1 lan gap doi
        //    1 2 1 3 1 2 1         n = 3 => 2 lan gap doi
        return n;
    }
    if (k < lt) {
        return solve(n - 1, k);
    } else {
        return solve(n - 1, k - lt);
    }
}

int main()
{
    long long n, k;
    cin >> n >> k;
    cout << solve(n, k) << endl;
    return 0;
}