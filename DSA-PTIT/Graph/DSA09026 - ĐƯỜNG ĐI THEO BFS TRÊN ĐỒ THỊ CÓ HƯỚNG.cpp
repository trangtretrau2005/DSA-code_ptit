#include <bits/stdc++.h>

using namespace std;

int m2c[1001][1001], mark[1001], parent[1001];
int n, m, k, p;
set<int> st[1001];

vector<int> res;
void dfs(int start){
    mark[start] = 1;
    for(int it:st[start]){
        if(!mark[it]){
            parent[it] = start;
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
    cin>>n>>m>>k>>p;
    while(m--){
        int x, y;
        cin>>x>>y;
        st[x].insert(y);
        // st[y].insert(x);
    }

    // dfs(k);
    bfs(k);

    int t = p;
    vector<int> tmp;
    // 1 2 3 4 5 6
    // -1 1 4 5 2 5
    // for(int i=1; i<=6; i++) cout<<parent[i]<<" ";
    if(!mark[p]) cout<<-1<<endl;
    else{
        while(t != k){
            tmp.push_back(t);
            t = parent[t];
        }
        cout<<k<<" ";
        for(int i=tmp.size()-1; i>=0; i--) cout<<tmp[i]<<" ";
    }
    memset(mark, 0, sizeof(mark));
    for(int i=1; i<=n; i++) st[i].clear();
    memset(parent, 0, sizeof(parent));
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}