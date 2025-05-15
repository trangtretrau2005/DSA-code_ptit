#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], mark[100001];

void generation(){
    int i=k;
    while(i>0 && m[i]==n-k+i) i--;

    if(i==0) for(int u=1;u<=k;u++) cout<<u<<" ";
    else{
        m[i]++;
        for(int j=i+1;j<=k;j++) m[j] = m[j-1] + 1;
        for(int u=1;u<=k;u++) cout<<m[u]<<" ";
    }
}

void solution(){
    cin>>n>>k;
    for(int i=1;i<=k;i++) cin>>m[i];

    generation();
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}