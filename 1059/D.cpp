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
        bool change= false;
        while (l<r){
            if (change){
                l=spp_l;
                r=spp_r;
                change= false;
                continue;
            }
            if(abs(l-r)==1){

                if(ans_l==0){
                    if(fp(l,l)-op(l,l)==1){
                        ans_l=l;
                    } else{
                        ans_l=r;
                    }
                    change= true;
                    continue;
                }
                if(ans_r==0) {
                    if (fp(r, r) - op(r, r) == 1)
                        ans_r = r;

                    else {
                        ans_r = l;
                    }
                    if(ans_r!=0&&ans_l!=0){
                        ans(ans_l,ans_r);
                        return;
                    }
                }
            }
            mid=(l+r)/2;
            bool a= false,b= false;
            if (first){
                a=check(l,mid,op(l,mid),fp(l,mid));b=check(mid,r,op(mid,r),fp(mid,r));
            }
            if((!a && !b && first) || (a && b && first)){
                spp_l=mid;
                spp_r=r;
                r=mid;
                first=0;
                }
            if((!a&&b&&r==len))
            {
                ans(mid,r);
                return;
            } else if(a&&!b&&ans_l!=0){
                ans(ans_l,mid);
                return;
            }
            if(!check(l,mid,op(l,mid),fp(l,mid))){
                r=mid;
                continue;
            }
            else if(!check(mid,r,op(mid,r),fp(mid,r))){
                l=mid;
                continue;
            }
        }
    ans(ans_l,ans_r);





    }


int main() {
    read_fast();
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}