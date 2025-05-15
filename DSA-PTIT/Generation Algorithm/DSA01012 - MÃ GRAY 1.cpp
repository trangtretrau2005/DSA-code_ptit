#include <bits/stdc++.h>

using namespace std;

int n, k, res=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

void Try(int i){
    if(i==n+1){
        cout<<m[1];
        for(int j = 2; j<=n; j++){
            cout<<(m[j-1]^m[j]);
        }
        cout<<" ";
        return;
    }
    for(int j=0;j<=1;j++){
        m[i] = j;
        Try(i+1);
    }
}

void solution(){
    cin>>n;
    Try(1);
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}