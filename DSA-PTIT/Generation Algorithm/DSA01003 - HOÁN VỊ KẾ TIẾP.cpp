#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], mark[100001], tmpv[100001];

void generation(){
    int i=n;
    while(m[i] <= m[i-1] && i>0) i--;
    if(i==1){
        sort(m+1, m+n+1);
        for(int j=1;j<=n;j++) cout<<m[j]<<" ";
    }
    else{
        int j=n;
        while(m[j] <= m[i-1] && j>0) j--;
        swap(m[i-1],m[j]);
        sort(m+1+i, m+1+n);
        for(int u=1;u<=n;u++) cout<<m[u]<<" ";
    }
}

void solution(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>m[i];
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