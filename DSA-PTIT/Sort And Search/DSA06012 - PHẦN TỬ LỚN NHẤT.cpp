#include <bits/stdc++.h>

using namespace std;

int n, s, m[10001];

void solution(){
    cin>>n>>s;
    for(int i=0;i<n;i++) cin>>m[i];
    sort(m, m+n);

    for(int i=n-1;i>n-1-s;i--) cout<<m[i]<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}