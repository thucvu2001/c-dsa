// Chuyển từ danh sách kề sang danh sách cạnh (do thi vo huong)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> a;
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp) {
            if (i < stoi(tmp)) {
                a.push_back({ i, stoi(tmp) });
            }
        }
    }
    sort(a.begin(), a.end());
    for (auto it : a) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}