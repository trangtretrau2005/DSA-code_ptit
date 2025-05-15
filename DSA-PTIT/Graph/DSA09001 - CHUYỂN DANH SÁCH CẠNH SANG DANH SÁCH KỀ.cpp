#include <bits/stdc++.h>

using namespace std;

int n,m;

void solution(){
    cin>>n>>m;
    set<int> st[10001];
    while(m--){
        int x, y;
        cin>>x>>y;
        st[x].insert(y);
        st[y].insert(x);
    }
    for(int i=1; i<=n; i++){
        if(st[i].empty()) continue;
        cout<<i<<": ";
        for(int it:st[i]) cout<<it<<" ";
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