// Hoàng yêu thích các số may mắn. Ta biết rằng một số là số may mắn nếu biểu diễn thập phân của nó chỉ chứa các chữ số may mắn là 4 và 7.
// Ví dụ, các số 47, 744, 4 là số may mắn và 5, 17, 467 không phải. Hoàng muốn tìm số may mắn bé nhất có tổng các chữ số bằng n. Hãy giúp anh ấy.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int y = n / 7; y >= 0; y--) {
        for (int x = (n - 7 * y) / 4; x >= 0; x--) {
            if (4 * x + 7 * y == n) {
                for (int i = 1; i <= x; i++) {
                    cout << "4";
                }
                for (int i = 1; i <= y; i++) {
                    cout << "7";
                }
                return 0;
            }
        }
    }
    cout << "-1" << endl;
    return 0;
}