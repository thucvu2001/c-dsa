// Hay viet chuong trinh chuyen doi bieu thuc bieu dien duoi dang hau to ve dang tien to

#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    stack<string> st;
    for (int i = 0; i <= s.length() - 1; i++) {
        if (isalpha(s[i])) {
            string tmp = "" + s[i];
            st.push(tmp);
        } else {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            string tmp = s[i] + a + b;
            st.push(tmp);
        }
    }
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