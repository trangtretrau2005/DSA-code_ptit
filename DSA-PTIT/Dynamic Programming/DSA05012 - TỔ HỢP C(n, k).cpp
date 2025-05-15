#include <bits/stdc++.h>

using namespace std;

int n, k, m[10001], tmpv[10001], dp[2000][2000];
#define mod 1000000007

void solution(){
    
    for(int i=1;i<=1000;i++){
        for(int j=1; j<=i; j++){
            if((j==1) || (i==j)) dp[i][j] = 1;
            else{
                dp[i][j] = ((dp[i-1][j] % mod) + (dp[i-1][j-1] % mod)) % mod;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    solution();
    // for(int i=1;i<=15;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<dp[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    while(t--){
        cin>>n>>k;
        cout<<dp[n+1][k+1]<<endl;
    }
}