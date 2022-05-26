// Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại;
// đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch.Ví dụ : các số 36788766;
// 12345654322 là các số đẹp.Viết chương trình kiểm tra số đẹp theo tiêu chí trên.

#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    int dau = s[0] - '0', cuoi = s[s.size() - 1] - '0';
    if (!(dau == 2 * cuoi || cuoi == 2 * dau)) {
        return false;
    }
    int l = 1, r = s.size() - 2;
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    if (check(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
