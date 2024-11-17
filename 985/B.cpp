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
    int n,sum=0,xx=0,maxx=-1;
    cin>>n;
    for(int x=2;x<=n;x++){
        sum=0;
        for(int k=1;k*x<=n;k++){
            sum+=k*x;
        }
        if(sum>maxx){
            xx=x;
            maxx=sum;
        }
    }
    cout<<xx<<endl;
}


int main() {
    read_fast();
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}