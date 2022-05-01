#include <bits/stdc++.h>
using namespace std;

int n;
string s1, s2;
bool check1, check2;
vector<string> res1;
vector<string> res2;

void khoiTao1()
{
    for (int i = 1; i <= n; i++) {
        s1 += (char)(i + 64);
    }
}

void sinhHoanVi()
{
    int i = s1.length() - 2;
    while (i >= 0 && s1[i] > s1[i + 1]) {
        i--;
    }
    if (i == -1) {
        check1 = false;
    } else {
        int j = s1.length() - 1;
        while (s1[i] > s1[j]) {
            j--;
        }
        swap(s1[i], s1[j]);
        reverse(s1.begin() + i + 1, s1.end());
    }
}

void khoiTao2()
{
    for (int i = 1; i <= n; i++) {
        s2 += '1';
    }
}

void sinhChinhHopLap()
{
    int i = s2.length() - 1;
    while (i >= 0 && s2[i] == char(48 + n)) {
        i--;
    }
    if (i == -1) {
        check2 = false;
    } else {
        s2[i]++;
        for (int j = i + 1; j <= n; j++) {
            s2[j] = '1';
        }
    }
}

int main()
{
    cin >> n;
    check1 = true;
    check2 = true;
    khoiTao1();
    khoiTao2();
    while (check1) {
        res1.push_back(s1);
        sinhHoanVi();
    }
    while (check2) {
        res2.push_back(s2);
        sinhChinhHopLap();
    }
    for (string x : res1) {
        for (string y : res2) {
            cout << x << y << endl;
        }
    }
    return 0;
}