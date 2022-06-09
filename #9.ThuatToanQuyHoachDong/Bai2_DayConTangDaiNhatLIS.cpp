// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm dãy con (không nhất thiết các phần tử phải liên tiếp) tăng chặt dài nhất của mảng A.

// Dãy con tăng dài nhất - Longest increasing subsequence (LIS)
// VD: 2 3 8 1 4 5
// Dãy con tăng dài nhất có độ dài là 4: 2 3 4 5

// len[i]: độ dài dãy con tăng dài nhất kết thúc ở chỉ số i

// O(n^2)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], len[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        len[i] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                len[i] = max(len[i], len[j] + 1);
                // nếu không có max sẽ sai trong trường hợp sau, vd: 1 2 3 4 1 5
            }
        }
    }
    cout << *max_element(len, len + n);
    return 0;
}