// Một số được coi là số đẹp khi nó đồng thời vừa chia hết cho một số nguyên tố và chia hết cho bình phương của số nguyên tố đó.
// Viết chương trình liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước.

#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            if (cnt >= 2) {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (check(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
