#include <bits/stdc++.h>
using namespace std;

//VD: 1 3 7 2
//    S = 5
// 0 1 2 3 4 5 xet tu 0 den S
// 1 0 0 0 0 0 danh dau
// vi moi phan tu chi su dung 1 lan nen xet tu S ve 
// 1 1 0 0 0 0 xet phan tu 1
// 1 1 0 1 1 0 xet phan tu 1 3
// 1 1 0 1 1 0 xet phan tu 1 3 7, vi 7 > S nen khong doi
// 1 1 1 1 1 1 xet phan tu 1 3 7 2

int main()
{
    int n, S;
    cin >> n >> S;
    int a[n];

    // Set dap an cho bai toan con
    vector<bool> res(n + 1, false);
    res[0] = true;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) { // voi moi phan tu a[i] xet tu S -> a[i]
        // Xet tu S -> a[i];
        for (int j = S; j >= a[i]; j--) {
            if (res[j - a[i]] == true) {
                res[j] = true;
            }
        }
    }
    if (res[S] == true) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}