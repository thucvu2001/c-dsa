#include <bits/stdc++.h>
using namespace std;
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int& x : a)
        cin >> x;
    for (int i = 1; i < n; i++) {
        int x = a[i], pos = i - 1;
        while (pos >= 0 && x < a[pos]) {
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
        cout << "Buoc " << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
