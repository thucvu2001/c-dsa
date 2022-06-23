// Cho mảng A[] gồm N số nguyên. Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất.
// Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng vào vị trí bất kỳ trong mảng.
// Ví dụ A[] = {2, 3, 5, 1, 4, 7, 6 }sẽ cho ta số phép chèn ít nhất là 3 bằng cách lấy số 1 chèn trước số 2, lấy số 4 chèn trước số 5, lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.

#include <bits/stdc++.h>
using namespace std;

// tính số bước ít nhất để sắp xếp 1 mảng tăng dần
// chỉ được chèn các phần tử vào các vị trí, mỗi lần chèn tính là 1 bước
// tính độ dài xâu con tăng dài nhất => các phần tử còn lại chưa được sắp xếp
// => số phần tử - độ dài xâu con tăng dài nhất = ket qua

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