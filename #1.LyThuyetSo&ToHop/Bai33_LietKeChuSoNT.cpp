// Liệt kê số lần xuất hiện của chữ số nguyên tố của 1 số theo thứ tự từ nhỏ đến lớn

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long dao = 0;
    int dem[10];
    for (int i = 0; i < 10; i++) {
        dem[i] = 0;
    }
    while (n) {
        int r = n % 10;
        if (r == 2 || r == 3 || r == 5 || r == 7)
            dem[r]++;
        dao = dao * 10 + r;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (dem[i] != 0) {
            cout << i << " " << dem[i] << endl;
        }
    }
    cout << endl;
    while (dao) {
        int r = dao % 10;
        if (dem[r] != 0) {
            cout << r << " " << dem[r] << endl;
            dem[r] = 0;
        }
        dao /= 10;
    }
}