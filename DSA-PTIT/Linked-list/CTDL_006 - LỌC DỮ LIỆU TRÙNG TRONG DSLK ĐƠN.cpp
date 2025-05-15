#include <bits/stdc++.h>

using namespace std;

int m[100001], mark[100001];

void solution(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m[i];
        mark[m[i]]++;
    }
    // int k; cin>>k;
    for(int i=0; i<n; i++) if(mark[m[i]]>=1) {cout<<m[i]<<" ", mark[m[i]]=0;}
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}