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
    int litters[26]={0};
    int len;
    cin>>len;
    int track[200004];
    for(int i=0;i<len;i++){
        cin>>track[i];
    }
    for(int i=0;i<len;i++){
        for(int l=0;l<26;l++){
            if(litters[l]==track[i]){
                char litter='a';
                litters[l]++;
                litter+=l;
                cout<<litter;
                break;
            }
        }
    }
    cout<<endl;
}


int main() {
    read_fast();
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}