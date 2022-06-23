// Bạn được cung cấp một số nguyên n. Trên mỗi bước, bạn có thể trừ một trong các chữ số khỏi số.
// Cần thực hiện bao nhiêu bước để số đó bằng 0?
// vd 27
// Các bước thực hiện : 27→20→18→10→9→0
// output: 5

#include <bits/stdc++.h>
using namespace std;

int max_digit(int n)
{
    int ans = 0;
    while (n) {
        ans = max(ans, n % 10);
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int f[n + 1]; // số bước tối thiểu để số đó từ n về f[i];
    f[n] = 0; // từ n về n thì cần 0 bước => f[0] số bước tối thiểu để số đó về 0
    while (n) {
        int tmp = max_digit(n);
        f[n - tmp] = f[n] + 1;
        n = n - tmp; 
    }
    cout << f[0] << endl;
    return 0;
}