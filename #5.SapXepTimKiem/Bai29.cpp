#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int& x : a)
        cin >> x;
    sort(a, a + n);
    int i = 0, j = n - 1;
    while (i < j) {
        cout << a[i] << " " << a[j] << " ";
        i++;
        j--;
    }
    return 0;
}
