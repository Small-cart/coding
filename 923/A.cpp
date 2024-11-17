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
    string line;
    bool first=true;
    char now;
    ll len;
    cin>>len;
    cin>>line;
    ll s=0,e=0;
    for(ll i=0;i<len;i++){
        now=line[i];
        if(now=='B'&&first){
            s=i;
            first= false;
        }
        if(now=='B')e=i;
    }

    cout<<(e-s)+1<<endl;
}



int main() {
    read_fast();
    ll t;
    cin>>t;
    while (t--)solve();
    return 0;
}
