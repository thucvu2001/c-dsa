#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dske[1001];
int indegree[1001];
vector<int> topo;

void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
        indegree[y]++;
    }
}

void kahn()
{
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        topo.push_back(top);
        for (int v : dske[top]) {
            indegree[v]--;
            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }
}

int main()
{
    nhap();
    kahn();
    if (topo.size() != n) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}