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

struct can{
    int kind=-1,cost=0;
};
bool cmp(can a,can b){
    return a.cost>b.cost;
}
void solve(){
    int n,k;
    cin>>n>>k;
    can a[200004];
    for(int i=0;i<k;i++){
        cin>>a[i].kind>>a[i].cost;

    }
    sort(a,a+n, cmp);
    int sum=0,now_kind=-1;
    for(int i=0;i<k;i++){
        if(now_kind==a[i].kind){
            sum+=a[i].cost;
        }
        else if(n){
            now_kind=a[i].kind;
            sum+=a[i].cost;
            n--;
        }
    }
    cout<<sum<<endl;
}


int main() {
    read_fast();
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}