#include <bits/stdc++.h>
using namespace std;

bool check;
vector<int> res;

void sinh()
{
    int i = res.size() - 2;
    while (i >= 0 && res[i] < res[i + 1]) {
        i--;
    }
    if (i == -1) {
        check = false;
    } else {
        int j = res.size() - 1;
        while (res[i] < res[j]) {
            j--;
        }
        swap(res[i], res[j]);
        reverse(res.begin() + i + 1, res.end());
    }
}

int main()
{
    int m;
    cin >> m;
    set<int> se;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        se.insert(x);
    }
    for (int x : se) {
        res.push_back(x);
    }
    sort(res.begin(), res.end(), greater<int>());
    check = true;
    while (check) {
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}