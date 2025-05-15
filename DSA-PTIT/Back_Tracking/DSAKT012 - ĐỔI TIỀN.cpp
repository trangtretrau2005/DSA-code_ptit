#include <bits/stdc++.h>

using namespace std;

int n, k, minR, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;

void Try(int i, int sum){
    if(!check){
        if(sum==k){
            check=true;
            minR = min(minR, i-1);
            return;
        }
        for(int j=tmpv[i-1]+1;j<=n;j++){
            tmpv[i] = j;
            if(sum + m[j] <= k){
                Try(i+1, sum+m[j]);
            } 
        }
    }
}

void solution(){
    minR = INT_MAX;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>m[i];
    sort(m+1, m+1+n, greater<int>());
    Try(1,0);
    if(check) cout<<minR;
    else cout<<-1;
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}