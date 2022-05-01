#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int dem[256] = { 0 };
    for (char x : s) {
        dem[x]++;
    }
    int max_val = INT_MIN, min_val = INT_MAX;
    int max = 0, min = 0;
    for(int i=0;i<256;i++){
        if(dem[i]){
            if(dem[i] >= max_val){
                max_val = dem[i];
                max = i;
            }
            if(dem[i] <= min_val){
                min_val = dem[i];
                min = i;
            }
        }
    }
    cout << char(max) << " " << max_val << endl;
    cout << char(min) << " " << min_val << endl;
    return 0;
}
