#include <bits/stdc++.h>

using namespace std;

int m[10000001];

void solution(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>m[i];
    int k; cin>>k;
    for(int i=0; i<n; i++) if(m[i]!=k) cout<<m[i]<<" ";
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}