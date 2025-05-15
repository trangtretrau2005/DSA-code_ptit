#include <bits/stdc++.h>

using namespace std;

int n,m, parent[10001], mark[10001], check, color[10001];
set<int> st[10001];

void dfs(int s){
    mark[s] = 1;
    color[s] = 1;
    for(int it : st[s]){
        if(!mark[it]){
            mark[it] = 1;
            parent[it] = s;
            dfs(it);
        }
        else if(color[it] == 1 && parent[s] != it){ // check xem đk chỉ có color[it] == 1
            check = 1;
            return;
        }
    }
    color[s] = 2;
}

int bac_vao[10001];
bool bfs(){
    // chuan bi
    for(int i=1; i<=n; i++){
        for(int it:st[i]){
            bac_vao[it]++;
        }
    }
    queue<int> q;
    for(int i=1; i<=n; i++) if(bac_vao[i]==0) q.push(i);
    
    int cnt=0;
    // q.push(s);
    // mark[s] = 1;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        
        cnt++;

        for(int it:st[tmp]){
            bac_vao[it]--;
            if(bac_vao[it]==0) q.push(it);
        }   
    }
    return n!=cnt;
}

void solution(){
    // check = 0; memset(parent, 0, sizeof(parent)); memset(mark, 0, sizeof(mark)); memset(color, 0, sizeof(color));
    memset(bac_vao, 0, sizeof(bac_vao));
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        st[x].insert(y);
        // st[y].insert(x);
    }
    // for(int i=1; i<=n; i++) if(!mark[i]) dfs(i);

    check = bfs();
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