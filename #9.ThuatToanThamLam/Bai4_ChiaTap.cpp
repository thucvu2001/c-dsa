// Cho mảng A[] gồm N số nguyên không âm và số K.
// Nhiệm vụ của bạn là hãy chia mảng A[] thành hai mảng con có kích cỡ K và N-K sao cho hiệu giữa tổng hai mảng con là lớn nhất.
// Ví dụ với mảng A[] = {8, 4, 5, 2, 10}, K=2 ta có kết quả là 17 vì mảng A[] được chia thành hai mảng {4, 2} và { 8, 5,10} có hiệu của hai mảng con là 23-6=17 là lớn nhất.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (k <= n / 2) {
        sort(a, a + n);
    } else {
        sort(a, a + n, greater<int>());
    }
    long long tong1 = 0, tong2 = 0;
    for (int i = 0; i < n; i++) {
        if (i < k) {
            tong1 += a[i];
        } else {
            tong2 += a[i];
        }
    }
    cout << abs(tong2 - tong1) << endl;
    return 0;
}