#include <bits/stdc++.h>

using namespace std;

int n,m,sta;

void solution(){
    set<int> st[10001];
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        st[x].insert(y);
        // st[y].insert(x);
    }
    for(int i=1; i<=n; i++){
        cout<<i<<": ";
        for(auto it:st[i]) cout<<it<<" ";
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}