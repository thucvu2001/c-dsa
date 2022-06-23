// Trong một lớp học luôn tồn tại những nhóm học sinh, các học sinh trong nhóm này sẽ thân thiết với nhau hơn.
// Giả sử trong 1 nhóm, nếu bạn a chơi thân vs bạn b và bạn b chơi thân với bạn c, thì bạn a và bạn c sẽ chơi thân với nhau.
// Hiện nay Tèo là lớp trưởng lớp 10A1,
// vì không thích việc chia bè kéo cánh trong lớp nên Tèo quyết định tìm các bạn nhóm trưởng của các nhóm để bàn việc hợp nhất các nhóm.
// Tèo biết rằng trong các nhóm nhỏ, nhóm trưởng là người có nhiều quan hệ thân thiết với các thành viên khác trong nhóm nhất và là người có số thứ tự nhỏ nhất.
// Nếu một bạn nào đó không chơi với ai cả thì bạn đó là nhóm trưởng của chính mình.
// Bạn hãy giúp tèo in ra thứ tự của các trưởng nhóm theo thứ tự từ nhỏ đến lớn nhé.

#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dske[1001];
bool visited[1001];
int cnt = 0;
vector<int> tplt[1001];

void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
        dske[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        sort(dske[i].begin(), dske[i].end());
    }
    memset(visited, false, sizeof(visited));
}

void dfs(int u)
{
    visited[u] = true;
    tplt[cnt].push_back(u);
    for (int v : dske[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main()
{
    nhap();
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            ++cnt;
            dfs(i);
        }
    }
    vector<int> nhomTruong;
    for (int i = 1; i <= cnt; i++) {
        sort(tplt[i].begin(), tplt[i].end());
        int ans = -1, dinh;
        for (int x : tplt[i]) {
            if ((int)dske[x].size() > ans) { // chú ý: hàm size() trả về size_t (>=0) mà số ans = -1 không thể so sánh với kdl size_t, phải ép sang kiểu int
                ans = (int)dske[x].size();
                dinh = x;
            }
        }
        nhomTruong.push_back(dinh);
    }
    sort(nhomTruong.begin(), nhomTruong.end());
    for (int x : nhomTruong) {
        cout << x << " ";
    }
    return 0;
}