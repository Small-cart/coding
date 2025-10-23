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
    int spp_r=0,spp_l=0,mid=0,ans_l=0,ans_r=0,spp_mid=0;
    if (check(l,r,op(l,r),fp(l,r))){ans(l,r);return;}
    int first=1;
    while (1){
        if(spp_mid&&l==r){ans(spp_mid,spp_mid);return;}
        if(r-l==1){
            if(ans_l!=0&&ans_r!=0){ans(ans_l,ans_r);return;}
            if(op(l,l)+1==fp(l,l)){
                if(!ans_l) { ans_l = l; }
                l=spp_mid;
                r=spp_r;
                continue;
            } else if(!ans_l)ans_l=r;
            if (op(r,r)+1==fp(r,r)){
                if(!ans_r)ans_r=r;
            }
            else if(!ans_r)ans_r=l;
            l=spp_mid;
            r=spp_r;
            continue;
        }
        mid=(r-l)/2;
        mid+=1;
        if (first)
        {int temp_a,temp_b,temp_c,temp_d;
            if(len%2==0){
                temp_a=op(mid+1,r);temp_b=fp(mid+1,r);temp_c=op(l,mid);temp_d=fp(l,mid);
            }
            else{
                temp_a=op(mid,r);temp_b=fp(mid,r);temp_c=op(l,mid);temp_d=fp(l,mid);
            }

        if (!check(l,mid,temp_c,temp_d)&& !check(mid,r,temp_a,temp_b)&& !check_same(temp_a,temp_b)&& !check_same(temp_c,temp_d)){
            spp_r=r;
            spp_l=l;
            spp_mid=mid;
            first=0;
            r=mid;
            continue;
        }}

        int temp_x=op(l,mid),temp_y=fp(l,mid);
        if (check(l,mid,temp_x,temp_y)){ans_l=l;if (spp_l!=0&&spp_r!=0){l=spp_l;r=spp_r;}} else r=mid;
        if (check_same(temp_x,temp_y))l=mid+1;

        if (check(mid,r,op(mid,r),fp(mid,r))){ans_r=r;if(ans_l){ans(ans_l,ans_r);return;}}
        if(ans_l!=0&&ans_r!=0){ans(ans_l,ans_r);return;}
        if(l==r){ans(spp_mid,spp_mid);return;}

    }



}


int main() {
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}