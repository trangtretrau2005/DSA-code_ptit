#include <bits/stdc++.h>

using namespace std;

int n, k, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

void in(){
    for(int i=1;i<=k;i++) cout<<m[tmpv[i]]<<" ";
    cout<<endl;
}

void Try(int i){
    if(i==k+1){
        cnt++;
        // in();
        return;
    }
    for(int j=tmpv[i-1] + 1; j<=n; j++){
        tmpv[i] = j;
        if(m[tmpv[i-1]] < m[tmpv[i]]){
            Try(i+1);
        }
    }
}

void solution(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>m[i];
    Try(1);
    cout<<cnt<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}