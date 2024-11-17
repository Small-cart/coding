#pragma GCC optimize(3)
#pragma GCC target("avx")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#pragma GCC optimize("-fdelete-null-pointer-check")

#include <bits/stdc++.h>


#define ll long long
using namespace std;
void read_fast(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("2.in","r",stdin);
#endif
}

int t;

int sames[160004]={0};


int aa[100004]={0},bb[100004]={0},already[100004]={0};
int already_b[100004]={0};
void clean(){

    memset( aa, 0, sizeof(aa) );
    memset( bb, 0, sizeof(bb) );
    memset( already, 0, sizeof(already) );
    memset( already_b, 0, sizeof(already_b) );
    memset( sames, 0, sizeof(sames) );

}



void solve(){
    ll len_a,len_b,k,temp=0,tt;
    cin>>len_a>>len_b>>k;



    ll len_aa=0;
    for (ll i=0;i<len_a;i++){
        cin>>tt;
        if(1<=tt&&tt<=k){

            if(already[tt%100004]==0){
                aa[temp%100004]=tt;
                len_aa++;
                sames[aa[temp%100004]]++;
                temp++;
                already[tt%100004]++;
            }


        }
    }
    temp=0;
    ll len_bb=0;
    for(ll i=0;i<len_b;i++){
        cin>>tt;
        if(1<=tt&&tt<=k){

            if(already_b[tt%100004]==0){
                bb[temp%100004]=tt;
                len_bb++;
                sames[bb[temp%100004]]++;
                temp++;
                already_b[tt%100004]++;
            }


        }
    }
    ll same=0;
    ll aaa=len_aa,bbb=len_bb;
    if(t<160004){for(ll i=1;i<100004;i++){
            if(sames[i]>1)same++;
        }}
    else{for(ll i=1;i<160004;i++){
            if(sames[i]>1)same++;
        }}
    ll free_a=k/2,free_b=k/2;
    aaa-=same;
    bbb-=same;
    free_a-=aaa;
    free_b-=bbb;
    if((free_b+free_a)==same&&(free_b>=0)&&(free_a>=0))cout<<"yes\n";
    else cout<<"no\n";
}


int main() {
    read_fast();

    cin>>t;
    while (t--) {clean(); solve(); }
    return 0;
}