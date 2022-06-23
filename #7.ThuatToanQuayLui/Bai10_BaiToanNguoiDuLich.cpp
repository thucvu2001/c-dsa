// Cho n thành phố đánh số từ 1 đến n và các tuyến đường giao thông hai chiều giữa chúng, mạng lưới giao
// thông này được cho bởi mảng C[1…n, 1…n] ở đây C[i][j] = C[j][i] là chi phí đi đoạn đường trực tiếp từ thành phố
// i đến thành phố j. Một người du lịch xuất phát từ thành phố 1, muốn đi thăm tất cả các thành phố còn lại mỗi
// thành phố đúng 1 lần và cuối cùng quay lại thành phố 1. Hãy chỉ ra chi phí ít nhất mà người đó phải bỏ ra.

#include <bits/stdc++.h>
using namespace std;

int n, c[1001][1001]; // n: số lượng thành phố, C[i][j]: chi phí đường đi từ thành phố i đến thành phố j
int fopt = INT_MAX; // lưu kết quả (đường đi tối ưu)
int cmin = INT_MAX; // chi phí tối thiểu giữa 2 thành phố bất kì
int X[1001]; // lưu thứ tự thành phố chọn để đi
bool visited[1001]; // đánh dấu thành phố đã được thăm hay chưa
int delta = 0; // lưu chi phí từ thành phố thứ 1 đến thành phố thứ k

void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
            if (c[i][j] != 0) {
                cmin = min(cmin, c[i][j]); // tìm cmin
            }
        }
    }
    memset(visited, false, sizeof(visited)); // đánh dấu tất cả các thành phố chưa được thăm
}

void Try(int k)
{
    for (int j = 2; j <= n; j++) {
        if (visited[j] == false) {
            X[k] = j;
            visited[j] = true; // đánh dấu đã được thăm
            delta += c[X[k - 1]][X[k]];
            if (k == n) {
                fopt = min(delta + c[X[k]][1], fopt); // cộng thêm chi phí từ thành phố hiện tại (thành phố cuối) về thành phố đầu tiên
            } else if (delta + cmin * (n - k + 1) < fopt) { // loại bỏ trường hợp không tối ưu (cắt cành)
                Try(k + 1);
            }
            visited[j] = false;
            delta -= c[X[k - 1]][X[k]];
        }
    }
}

int main()
{
    nhap();
    X[1] = 1; // bắt đầu từ thành phố thứ 1
    Try(2); // tìm từ thành phố thứ 2 trở đi
    cout << fopt << endl;
    return 0;
}