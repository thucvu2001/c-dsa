#include <bits/stdc++.h>
using namespace std;

// tính số bước ít nhất để sắp xếp 1 mảng tăng dần
// chỉ được chèn các phần tử vào các vị trí, mỗi lần chèn tính là 1 bước
// tính độ dài xâu con tăng dài nhất => các phần tử còn lại chưa được sắp xếp
// => số phần tử - độ dài xâu con tăng dài nhất

int main()
{
    int n;
    cin >> n;
    int a[n], dp[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dp[i] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << n - (*max_element(dp, dp + n)) << endl;
    return 0;
}