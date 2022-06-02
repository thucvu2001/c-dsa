// Một phân số đơn vị nếu tử số của phân số đó là 1. Mọi phân số nguyên dương đều có thể biểu diễn thành tổng các phân số đơn vị.
// Ví dụ 2/3 = 1/2 + 1/6. Cho phân số nguyên dương P/Q bất kỳ, hãy biểu diễn phân số nguyên dương thành tổng phân số đơn vị với số hạng tử là ít nhất.
#include <bits/stdc++.h>
using namespace std;

void Try(long long tu, long long mau)
{
    if (mau % tu == 0) {
        cout << "1/" << mau / tu << endl;
        return;
    }
    long long c = (mau / tu) + 1;
    cout << "1/" << c << " + ";
    long long mc = mau * c;
    long long tuMoi = tu * c - mau;
    Try(tuMoi, mc);
}

int main()
{
    long long a, b;
    cin >> a >> b;
    Try(a, b);
    return 0;
}