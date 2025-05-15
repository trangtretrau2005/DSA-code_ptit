#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

void in(){
    for(int i=1;i<=n;i++) cout<<mang[i]<<" ";
    cout<<endl;
}

void Try(int i){
    if(i==n+1){
        in();
        return;
    }
    for(int j=1; j<=n; j++){
        if(!lk[j]){
            lk[j] = 1;

            mang[i] = m[j];
            Try(i+1);

            lk[j] = 0;
        }
    }
}

void solution(){
    cin>>n;
    for(int i = 1; i<=n; i++) cin>>m[i];
    sort(m+1, m+n+1);
    Try(1);
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}