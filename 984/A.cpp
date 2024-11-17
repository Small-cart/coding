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
    int n=0;
    cin>>n;
    int a[100]={0};
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){if(abs(a[i]-a[i+1])==5||abs(a[i]-a[i+1])==7){ continue;}else{cout<<"no"<<endl;
            return;}}
    cout<<"yes"<<endl;
}


int main() {
    read_fast();
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}