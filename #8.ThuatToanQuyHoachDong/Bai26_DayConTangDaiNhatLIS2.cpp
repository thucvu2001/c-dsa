#include <bits/stdc++.h>
using namespace std;

// O(nlogn): sử dụng thêm tìm kiếm nhị phân để giảm độ phức tạp so với bài LIS1 (Bai2)

// res[i]: giá trị nhỏ nhất của phần tử cuối cùng của dãy con có độ dài i

// vd: 0 8 4 12 2 10 6 14 1 9 5 13
//     0
//     0 8
//     0 4
//     0 4 12
//     0 2 12
//     0 2 10
//     0 2 6
//     0 2 6 14
//     0 1 6 14
//     0 1 6 9
//     0 1 5 9
//     0 1 5 9 13

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> res;
    res.push_back(a[0]);
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(res.begin(), res.end(), a[i]); // phan tu dau tien >= a[i] trong vector res;
        if (it == res.end()) {
            res.push_back(a[i]);
        } else {
            *it = a[i];
        }
        // xem lai qua trinh xet
        // cout << a[i] << ": ";
        // for (int x : res) {
        //     cout << x << " ";
        // }
        // cout << endl;
    }
    cout << res.size() << endl;
    return 0;
}