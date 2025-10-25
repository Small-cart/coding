#include <bits/stdc++.h>
#define ll long long
using namespace std;
void read_fast(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
 //freopen("1.in","r",stdin);
#endif
}

int op(int l,int r){
    int sum=0;
    cout<<1<<' '<<l<<" "<<r <<endl;
    fflush(stdout);
    cin>>sum;

    return sum;
}

int fp(int l,int r){
    int sum=0;
    cout<<2<<' '<<l<<" "<<r<<endl;
    fflush(stdout);
    cin>>sum;

    return sum;
}

void ans(int l,int r){
    if(l!=0&&r==0)r=l;
    cout<<"!"<<' '<<l<<" "<<r<<endl;
    fflush(stdout);
    return;
}
bool check_same(int a,int b){
    return a==b;
}
bool check(int l,int r,int op_s,int fp_s){
    return op_s+(r-l+1)==fp_s;
}


void solve(){
        int len;
        cin>>len;
        int l=1,r=len;
        int n= fp(l,r)-op(l,r);
        while (l<r){
            int mid=(l+r)/2;
            int oop= op(l,mid),ffp=fp(l,mid);
            if(oop==ffp){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        ans(l,l+n-1);






    }


int main() {
    read_fast();
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}