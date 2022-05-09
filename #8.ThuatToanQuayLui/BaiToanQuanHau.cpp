#include <bits/stdc++.h>
using namespace std;

// in ra tất cả các trường hợp xếp n quân hậu vào bàn cờ kích thước n * n sao cho chúng không ăn nhau

int X[1001], n, cot[1001], dcxuoi[1001], dcnguoc[1001];

void in()
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == X[i]) {
                cout << "Q";
            } else {
                cout << "#";
            }
        }
        cout << endl;
    }
}

void Try(int i)
{
    for (int j = 1; j <= n; j++) {
        if (cot[j] == 0 && dcxuoi[i - j + n] == 0 && dcnguoc[i + j - 1] == 0) {
            X[i] = j;
            cot[j] = dcxuoi[i - j + n] = dcnguoc[i + j - 1] = 1;
            if (i == n) {
                in();
                cout << endl;
            } else {
                Try(i + 1);
            }
            cot[j] = dcxuoi[i - j + n] = dcnguoc[i + j - 1] = 0;
        }
    }
}

int main()
{
    memset(cot, 0, sizeof(cot));
    memset(dcxuoi, 0, sizeof(dcxuoi));
    memset(dcnguoc, 0, sizeof(dcnguoc));
    cin >> n;
    Try(1);
    return 0;
}