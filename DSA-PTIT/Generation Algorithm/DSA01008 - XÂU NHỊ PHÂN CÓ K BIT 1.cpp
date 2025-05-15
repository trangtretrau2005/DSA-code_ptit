#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001];

void in(){
    for(int i=0; i<n; i++) cout<<m[i];
    cout<<endl;
}

bool ktr(){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(m[i]==1) cnt++;
    }
    if(cnt==k) return true;
    return false;
}

void Try(int i){
    if(i==n){
        if(ktr()) in();
        return;
    }
    for(int j=0; j<=1; j++){
        m[i] = j;
        Try(i+1);
    }
}

void solution(){
    cin>>n>>k;
    Try(0);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}