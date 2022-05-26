// đếm số lượng ước số của một số nguyên dương
// tính dựa vào số mũ của các thừa số nguyên tố

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long demUoc = 1;
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        demUoc *= (b + 1);
        demUoc %= 1000000007;
    }
    cout << demUoc << endl;
    return 0;
}
