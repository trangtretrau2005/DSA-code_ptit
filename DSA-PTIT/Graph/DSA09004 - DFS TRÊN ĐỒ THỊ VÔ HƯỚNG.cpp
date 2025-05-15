#include <bits/stdc++.h>

using namespace std;

int n,m,sta;
int mark[10001];
vector<int> res;

void dfs(int sta, set<int> st[]){
    mark[sta] = 1;
    res.push_back(sta);
    for(int it:st[sta]){
        if(!mark[it]) dfs(it, st);
    }
}

void solution(){
    cin>>n>>m>>sta;
    set<int> st[10001];
    memset(mark, 0, sizeof(mark));
    while(m--){
        int x,y;
        cin>>x>>y;
        st[x].insert(y);
        st[y].insert(x);
    }
    dfs(sta, st);
    for(int it:res) cout<<it<<" ";
    cout<<endl;
    res.clear();
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}