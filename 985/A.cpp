#include <bits/stdc++.h>
#define ll long long
using namespace std;
void read_fast(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("1.in","r",stdin);
#endif
}

void solve(){
    string a,b;
    cin>>a>>b;
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;
}


int main() {
    read_fast();
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}