// Cho dãy số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là tính tổng của dãy con lien tiep có tổng lớn nhất.
#include <bits/stdc++.h>
using namespace std;

// co 3 cach:
// 1 trâu
// 2 duyệt từ đầu đến cuối tính sum, và lưu sum max vào 1 biến, nếu sum hiện tại < 0 thì reset sum đó về 0 và tiếp tục duyệt đến cuối
// 3 chia và trị (O(nlogn))

// cach 3: chia mang thanh 2 phan:
// th1: day con nam hoan toan ben trai
// th2: day con nam hoan toan ben phai
// th3: day con co 1 phan ben trai 1 phan ben phai

long long findMax(int a[], int l, int m, int r)
{
    long long s1 = 0, s2 = 0, tmp = 0;
    for (int i = m; i >= l; i--) {
        tmp += a[i];
        s1 = max(tmp, s1);
    }
    tmp = 0;
    for (int i = m + 1; i <= r; i++) {
        tmp += a[i];
        s2 = max(tmp, s2);
    }
    return s1 + s2;
}

long long solve(int a[], int l, int r)
{
    if (l == r) {
        return a[l];
    }
    int m = (l + r) / 2;
    long long trai = solve(a, l, m); // day con lon nhat ben trai
    long long phai = solve(a, m + 1, r); // day con lon nhat ben phai
    long long cross = findMax(a, l, m, r); // day con lon nhat vua nam ben trai vua nam ben phai
    return max({ trai, phai, cross });
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << solve(a, 0, n - 1) << endl;
    return 0;
}

// cach 2:
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     long long res = 0;
//     long long sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += a[i];
//         res = max(res, sum);
//         if (sum < 0) {
//             sum = 0;
//         }
//     }
//     cout << res << endl;
//     return 0;
// }