// Cho N công việc. Mỗi công việc được biểu diễn như một bộ 3 số nguyên dương , trong đó JobId là mã của việc,
// Deadline là thời gian kết thúc của việc, Profit là lợi nhuận đem lại nếu hoàn thành việc đó đúng thời gian.
// Thời gian để hoàn toàn mỗi công việc là 1 đơn vị thời gian.
// Hãy cho biết lợi nhuận lớn nhất có thể thực hiện các việc với giả thiết mỗi việc được thực hiện đơn lẻ.

#include <bits/stdc++.h>
using namespace std;

// sort theo profit giam dan
// mang danh dau cac moc thoi gian, moc thoi gian nao thuc hien cong viec nao

struct job {
    int id, deadline, profit;
};

bool cmp(job a, job b)
{
    return a.profit > b.profit;
}

int main()
{
    int n;
    cin >> n;
    vector<job> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].id >> v[i].deadline >> v[i].profit;
    }
    sort(v.begin(), v.end(), cmp); // sap xep theo loi nhuan giam dan
    vector<int> mark(n, -1); // danh dau n - 1 moc thoi gian
    for (int i = 0; i < n; i++) {
        // xet cac moc thoi gian dang bi trong
        // dien cong viec vao neu thoi gian bi trong
        for (int j = min(n - 1, v[i].deadline - 1); j >= 0; j--) {
            if (mark[j] == -1) {
                mark[j] = i; // luu lai chi so cua cong viec duoc lua chon
                break;
            }
        }
    }
    int cnt = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        if (mark[i] != -1) {
            cnt++;
            sum += v[mark[i]].profit;
        }
    }
    cout << sum << endl;
    return 0;
}