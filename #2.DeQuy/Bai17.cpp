#include <bits/stdc++.h>
using namespace std;

void in(long long n)
{
    if (n < 10)
        return;
    in(n / 10);
    cout << n % 10 << ' ';
}

void in1(long long n)
{
    if (n < 10)
        return;
    cout << n % 10;
    in(n / 10);
}

int main(){
    long long n; cin >> n;
    
    return 0;
}