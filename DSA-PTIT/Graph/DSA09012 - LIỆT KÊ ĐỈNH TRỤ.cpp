#include <bits/stdc++.h>

using namespace std;

int m2c[1001][1001], mark[10001], parent[10001], check[10001];
int n, m, k, p;
set<int> st[10001];

vector<int> res;
void dfs(int start){
    mark[start] = 1;
    // check[start] = val;
    for(int it:st[start]){
        if(!mark[it]){
            parent[it] = start;
            // check[it] = val;
            dfs(it);
        }
    }
}

void bfs(int start){
    mark[start] = 1;

    queue<int> q;
    q.push(start);
    while(!q.empty()){
        for(int it:st[q.front()]){
            if(!mark[it]){
                q.push(it);
                parent[it] = q.front();
                mark[it] = 1;
            }
        }
        q.pop();
    }
}

void solution(){
    cin>>n>>m;
    while(m--){
        int x, y;
        cin>>x>>y;
        st[x].insert(y);
        st[y].insert(x);
    }
    // dfs(k);
    bfs(k);
    int cnt_tplt = 0;
    for(int i=1; i<=n; i++){
        if(!mark[i]){
            cnt_tplt++;
            bfs(i);
        }
    }
    
    for(int i=1; i<=n; i++){
        memset(mark, 0, sizeof(mark));

        int tmp = 0;
        mark[i] = 1;
        for(int j=1; j<=n; j++){
            if(!mark[j]){
                dfs(j);
                tmp++;
            }
        }

        if(tmp > cnt_tplt) cout<<i<<" ";
    }
    cout<<endl;
    memset(mark, 0, sizeof(mark));
    memset(parent, 0, sizeof(parent));
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