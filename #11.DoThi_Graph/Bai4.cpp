// Chuyển từ danh sách kề sang danh sách cạnh (có hướng).
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp) {
            a.push_back({ i, stoi(tmp) });
        }
    }
    sort(a.begin(), a.end());
    for (auto it : a) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}