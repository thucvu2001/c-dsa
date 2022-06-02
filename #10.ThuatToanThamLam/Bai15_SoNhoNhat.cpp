#include <bits/stdc++.h>
using namespace std;

int a[1001];
int main()
{
    int s, d;
    cin >> s >> d;
    if(9 * d < s || (d >= 2 && s <= 1)){
        cout << -1 << endl;
        return 0;
    }
    int s1 = s - 1;
    int i = d - 1;
    while (s1 >= 9 && i >= 0) {
        a[i] = 9;
        s1 -= 9;
        i--;
    }
    if (i > 0) {
        a[i] = s1;
        s1 = 0;
    }
    a[0] = 1 + s1;
    for (int i = 0; i < d; i++) {
        cout << a[i];
    }
}