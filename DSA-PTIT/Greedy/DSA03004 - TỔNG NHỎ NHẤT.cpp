#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];

#define mod 1000000007
void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];
    sort(m,m+n);
    string mi="",ma="";
    for(int i=0;i<n;i++){
        if(i%2) mi += to_string(m[i]);
        else ma += to_string(m[i]);
    } 
    // cout<<mi<<" "<<ma<<endl;
    cout<<stoll(mi) + stoll(ma)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}