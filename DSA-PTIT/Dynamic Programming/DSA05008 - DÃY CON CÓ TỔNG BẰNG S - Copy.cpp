#include <bits/stdc++.h>

using namespace std;

int n, k, m[1000001], tmpv[100001];
bool dp[50001];
#define mod 1000000007

void solution(){
    memset(dp, 0, sizeof(dp));
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>m[i];

    dp[0] = true;
    for(int i=0;i<n;i++){
        for(int j=k; j>=m[i]; j--){
            dp[j] = (dp[j] || dp[j-m[i]]);
        }
    }
    // for(int i=0;i<=k;i++) cout<<dp[i]<<" ";
    if(dp[k]) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}