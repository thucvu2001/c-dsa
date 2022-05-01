#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    multiset<int> ms; // luu cac ve
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        // tim gia ve lon nhat <= a[i] cho ong khach thu i
        // upper_bound
        // multiset<int>::iterator it = upper_bound(begin(ms), end(ms), a[i]);
        multiset<int>::iterator it = ms.upper_bound(x);
        // co the thay bang auto it
        if (it == ms.begin()) {
            cout << "-1" << endl;
        } else {
            --it;
            cout << *it << endl;
            ms.erase(it); // xoa ve di
        }
    }
    return 0;
}