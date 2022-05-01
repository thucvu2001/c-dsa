#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    set<string> se;
    stringstream ss (s);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        se.insert(tmp);
        v.push_back(tmp);
    }
    for(auto it : se){
        cout << it << " ";
    }
    cout << endl;
    for(auto x : v){
        if(se.count(x)){
            cout << x << " ";
            se.erase(x);
        }
    }
    return 0;
}
