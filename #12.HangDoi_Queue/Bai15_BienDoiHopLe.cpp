// Cho cặp số S và T là các số nguyên tố có 4 chữ số (Ví dụ S = 1033, T = 8197 là các số nguyên tố có 4 chữ số).
// Hãy viết chương trình tìm cách dịch chuyển S thành T thỏa mãn đồng thời những điều kiện dưới đây:
// a. Mỗi phép dịch chuyển chỉ được phép thay đổi một chữ số của số ở bước trước đó (ví dụ nếu S=1033 thì phép dịch chuyển S thành 1733 là hợp lệ);
// b. Số nhận được cũng là một số nguyên tố có 4 chữ số (ví dụ nếu S=1033 thì phép dịch chuyển S thành 1833 là không hợp lệ, và S dịch chuyển thành 1733 là hợp lệ);
// c. Số các bước dịch chuyển là ít nhất. Ví dụ số các phép dịch chuyển ít nhất để S = 1033 thành T = 8179 là 6 bao gồm các phép dịch chuyển như sau: 8179 8779 3779 3739 3733 1733 1033.

#include <bits/stdc++.h>
using namespace std;

bool prime[100001];
void sang()
{
    for (int i = 0; i <= 10000; i++) {
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i <= sqrt(10000); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 10000; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main()
{

    return 0;
}