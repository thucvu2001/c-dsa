#include <bits/stdc++.h>
using namespace std;

int n;
char c[1001];
bool check;

void khoiTao()
{
    for (int i = 1; i <= n; i++) {
        c[i] = '(';
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && c[i] == ')') {
        c[i] = '(';
        i--;
    }
    if (i == 0) {
        check = false;
    } else {
        c[i] = ')';
    }
}

bool ktra(char c[])
{
    stack<char> st;
    for (int i = 1; i <= n; i++) {
        if (c[i] == '(') {
            st.push('(');
        } else {
            if (st.empty()) {
                return false;
            } else {
                st.pop();
            }
        }
    }
    if (st.empty()) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    cin >> n;
    check = true;
    bool ok = false;
    khoiTao();
    while (check) {
        if (ktra(c)) {
            ok = true;
            for (int i = 1; i <= n; i++) {
                cout << c[i];
            }
            cout << endl;
        }
        sinh();
    }
    if (ok == false) {
        cout << "NOT FOUND" << endl;
    }
    return 0;
}