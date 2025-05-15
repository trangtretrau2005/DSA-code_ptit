#include <bits/stdc++.h>

using namespace std;

int n, k, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;

void Try(int i){
    if(i==k+1){
        for(int j=1;j<=k;j++) cout<<m[tmpv[j]]<<" ";
        cout<<endl;
        return;
    }
    for(int j=tmpv[i-1]+1;j<=n;j++){
        tmpv[i] = j;
        Try(i+1);
    }
}

void solution(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>m[i];
    sort(m+1, m+1+n);
    Try(1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}