#include <bits/stdc++.h>
using namespace std;

int n, a[100];
bool check;

// khoi tao cau hinh dau tien
void ktao()
{
    for (int i = 1; i <= n; i++) {
        a[i] = 0; 
    }
}

// kiem tra cau hinh hien tai co phai cau hinh cuoi cung
bool checkIsFinal()
{
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            return false;
        }
    }
    return true;
}

// sinh cau hinh ke tiep
void sinh()
{
    int i = n; // bat dau tu bit cuoi cung
    // di tim phan tu dau tien = 0 tinh tu ben phai
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i != 0) {
        a[i] = 1;
    }
}

// cach 2: khong can check isFinal
void sinh2()
{
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0) {
        check = false;
    } else {
        a[i] = 1;
    }
}
int main()
{
    cin >> n;
    ktao();
    // check = true;
    while (checkIsFinal() == false) {
        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    // while (check) {
    //     for (int i = 1; i <= n; i++) {
    //         cout << a[i] << " ";
    //     }
    //     cout << endl;
    //     sinh2();
    // }

    // in ra cau hinh cuoi cung
    // for (int i = 1; i <= n; i++) {
    //     cout << a[i] << " ";
    // }
    return 0;
}