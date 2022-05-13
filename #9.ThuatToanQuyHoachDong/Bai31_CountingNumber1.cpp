#include <bits/stdc++.h>
using namespace std;

using ll = long long;

//--Cho 2 số L, R : Đếm xem trong đoạn từ L tới R có bao nhiêu số mà có tổng chữ số là X

// dp[i][sum][lessthan]
ll dp[20][200][2];

// --Chỉ số i : Vị trí mà mình đặt 1 chữ số (0...9)
// --sum : tổng các chữ số tính từ chỉ số 0 tới chỉ số i
// --lessThan : 1 : Chữ số ở chỉ số i của số hiện tại < chữ số ở chỉ số i của số n ban đầu
// 0 : Chữ số ở chỉ số i  của số hiện tại = chữ số ở chỉ số i của số n ban đầu

// dp[i][sum][1] += dp[i - 1][sum - j][1]

// dp[3][20][1] : Số lượng số có 4 chữ số mà tổng chữ số của chúng = 20, chữ số ở chỉ số thứ 3 của các số đã xét
// < chữ số ở chỉ số thứ 3 của số n ban đầu

// dp[3][20][0] : Số lượng số có 4 chữ số mà tổng chữ số của chúng = 20, chữ số ở chỉ số thứ 3 của các số đã xét
// = chữ số ở chỉ số thứ 3 của số n ban đầu

//Đếm số lượng số từ 0 tới n có tổng chữ số = X

// dp[0][0][1] = 1
// dp[0][1][1] = 1
// dp[0][2][1] = 1
// ....
// dp[0][7][1] = 1

// dp[0][8][0] = 1

ll F(ll n, int X)
{
    memset(dp, 0, sizeof(dp));
    string s = to_string(n);
    // Xếp các chữ số nhỏ hơn chữ số ở chỉ số 0 của số n ban đầu vào chỉ số 0
    for (int i = 0; i < s[0] - '0'; i++) {
        dp[0][i][1] = 1;
    }
    // Chon so dau tien = chu so dau tien cua n
    dp[0][s[0] - '0'][0] = 1;
    for (int i = 1; i < s.size(); i++) {
        // lua chon cac chu so tu 0 toi 9 de dien vao vi tri thu i
        for (int j = 0; j < 10; j++) {
            for (int sum = j; sum < 200; sum++) {
                // Nếu chữ số ở chỉ số i - 1 của các số đã chọn < chữ số ở chỉ số i - 1 của số n ban đầu
                dp[i][sum][1] += dp[i - 1][sum - j][1];
                // Nếu chữ số ở chỉ số i - 1 của các số đã xây dựng được = chữ số ở chỉ số i - 1 của số
                // n ban đầu, chỉ được lựa chọn các chữ số j < chữ số thứ i
                if (j < s[i] - '0') {
                    dp[i][sum][1] += dp[i - 1][sum - j][0];
                }
                // Nếu chữ số ở chỉ số i - 1 của các số đã xây dựng được = chữ số ở chỉ số i - 1 của số
                // n ban đầu, chỉ được lựa chọn các chữ số j < chữ số thứ i
                if (j == s[i] - '0')
                    dp[i][sum][0] += dp[i - 1][sum - j][0];
            }
        }
    }
    ll ans = 0;
    ans += dp[s.size() - 1][X][0] + dp[s.size() - 1][X][1];
    return ans;
}

int main()
{
    ll a, b, x;
    cin >> a >> b >> x;
    cout << F(b, x) - F(a - 1, x) << endl;
    return 0;
}