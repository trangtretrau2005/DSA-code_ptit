#include <bits/stdc++.h>

using namespace std;

int n, m[100001], tmpv[100001], lk[100001];

int k;
void in(){
    for(int i=1;i<=k;i++) cout<<m[tmpv[i]];
    cout<<" ";
}

void Try(int i){
    if(i==k+1){
        in();
        return;
    }
    // cach nay su dung mang luu vi tri cac phan tu m[]
    // => tmpv[i-1] chinh la VI TRI cua mang can tim vi tri i-1
    for(int j=tmpv[i-1]+1; j<=n; j++){
        tmpv[i] = j;
        Try(i+1);
    }
}

void solution(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) m[i] = i;
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