// Hay viet chuong trinh chuyen doi bieu thuc bieu dien duoi dang tiền tố về dạng hậu tố

#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    stack<string> st;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (isalpha(s[i])) {
            string tmp = "";
            tmp += s[i];
            st.push(tmp);
        } else {
            string top1 = st.top();
            st.pop();
            string top2 = st.top();
            st.pop();
            string tmp = top1 + top2 + s[i];
            st.push(tmp);
        }
    }
    cout << st.top() << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}