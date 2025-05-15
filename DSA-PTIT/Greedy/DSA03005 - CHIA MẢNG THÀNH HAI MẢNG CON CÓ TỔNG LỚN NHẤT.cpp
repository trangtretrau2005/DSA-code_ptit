#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];

#define mod 1000000007
void solution(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>m[i];
    sort(m,m+n);
    int mi=0,ma=0, mii=0, maa=0;
    for(int i=0;i<n;i++){
        if(i<k){
            mi += m[i];
            mii += m[n-i-1];
        }
        else{
            ma += m[i];
            maa += m[n-i-1];
        }
    } 
    // cout<<mi<<" "<<ma<<endl;
    if(abs(ma-mi) > abs(maa-mii)) cout<<abs(ma-mi)<<endl;
    else cout<<abs(maa-mii)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}