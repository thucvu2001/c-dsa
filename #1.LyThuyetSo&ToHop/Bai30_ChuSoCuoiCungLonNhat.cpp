// Viết chương trình C cho phép nhập vào n và liệt kê các số nguyên tố thỏa mãn nhỏ hơn hoặc bằng n và có chữ số cuối cùng lớn nhất. Có bao nhiêu số như vậy?

#include <bits/stdc++.h>

using namespace std;
bool prime[10000001];
void sang()
{
    for (int i = 0; i <= 10000000; i++) {
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i <= sqrt(10000000); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 10000000; j += i) {
                prime[j] = false;
            }
        }
    }
}

bool check(int n)
{
    int x = n % 10;
    n /= 10;
    while (n) {
        int r = n % 10;
        if (r > x) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    sang();
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (prime[i] && check(i)) {
            cout << i << " ";
            cnt++;
        }
    }
    cout << "\n";
    cout << cnt << endl;
    return 0;
}
