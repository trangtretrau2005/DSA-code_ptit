#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001];

void in(){
    for(int i=1;i<=k;i++) cout<<m[i]<<" ";
    cout<<endl;
}

void generation(){
    int i=k;
    while(m[i] == n-k+i && i>=0) i--;
    if(i==0) return;
    else{
        m[i]++;
        for(int j=i+1;j<=k;j++) m[j] = m[j-1] + 1;
        // in();
    }
}

void solution(){
    cin>>n>>k;
    for(int i=1;i<=k;i++) cin>>tmp[i];
    for(int i=1;i<=k;i++) m[i] = tmp[i];
    generation();

    int res=0;
    for(int i=1;i<=k;i++){
        if(binary_search(tmp+1, tmp+k+1, m[i])) res++;
    }

    if(res==k) cout<<res<<endl;
    else cout<<k-res<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}