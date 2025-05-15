#include <bits/stdc++.h>

using namespace std;

int n,m, parent[10001], mark[10001], check;
set<int> st[10001];

void dfs(int s){
    mark[s] = 1;
    for(int it : st[s]){
        if(!mark[it]){
            mark[it] = 1;
            parent[it] = s;
            dfs(it);
        }
        else if(parent[s] != it){
            check = 1;
            return;
        }
    }
}

void bfs(int s){
    queue<int> q;
    q.push(s);
    mark[s] = 1;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int it:st[tmp]){
            if(!mark[it]){
                mark[it] = 1;
                q.push(it);
                parent[it] = tmp;
            }
            else if(parent[tmp] != it){
                check = 1;
                return;
            }
        }
    }
}

void solution(){
    check = 0; memset(parent, 0, sizeof(parent)); memset(mark, 0, sizeof(mark)); 
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        st[x].insert(y);
        st[y].insert(x);
    }
    for(int i=1; i<=n; i++) if(!mark[i]) dfs(i); //bfs(i);
    if(check) cout<<"YES\n";
    else cout<<"NO\n";

    for(int i=1; i<=n; i++) st[i].clear();
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}