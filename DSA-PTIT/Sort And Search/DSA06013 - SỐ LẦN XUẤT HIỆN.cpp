#include <bits/stdc++.h>

using namespace std;

int n, s, m[10001];

void solution(){
    cin>>n>>s;
    int res=0;
    for(int i=0;i<n;i++){
        cin>>m[i];
        if(m[i] == s) res++;
    }
    if(res==0) cout<<-1<<endl;
    else cout<<res<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}