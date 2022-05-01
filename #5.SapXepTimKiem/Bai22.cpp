#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int& x : a)
        cin >> x;
    set<int> se;
    for (int i = 0; i < n; i++) {
        int tmp = a[i];
        while(tmp){
            se.insert(tmp % 10);
            tmp /= 10;
        }
    }
    for(int x : se){
        cout << x << " ";
    }
    return 0;
}
