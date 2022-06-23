// Ban đầu cho một queue rỗng.
// Bạn cần thực hiện các truy vấn sau:
// 1. Trả về kích thước của queue
// 2. Kiểm tra xem queue có rỗng không, nếu có in ra “YES”, nếu không in ra “NO”.
// 3. Cho một số nguyên và đẩy số nguyên này vào cuối queue.
// 4. Loại bỏ phần tử ở đầu queue nếu queue không rỗng, nếu rỗng không cần thực hiện.
// 5. Trả về phần tử ở đầu queue, nếu queue rỗng in ra -1. 6.
// Trả về phần tử ở cuối queue, nếu queue rỗng in ra -1.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> Q;
    int n;
    cin >> n;
    while (n--) {
        int x;
        if (x == 1) {
            cout << Q.size() << endl;
        } else if (x == 2) {
            if (Q.empty()) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if (x == 3) {
            int y;
            cin >> y;
            Q.push_back(y);
        } else if (x == 4) {
            if (!Q.empty()) {
                Q.pop_front();
            }
        } else if (x == 5) {
            
        }
    }
    return 0;
}