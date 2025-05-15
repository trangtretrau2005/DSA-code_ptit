#include <bits/stdc++.h>

using namespace std;

int m2c[1001][1001], mark[10001];
int n, m, k;
set<int> st[10001];

vector<int> res;
void dfs(int start){
    mark[start] = 1;
    res.push_back(start);
    for(int it:st[start]) if(!mark[it]) dfs(it);
}

void bfs(int start){
    mark[start] = 1;
    res.push_back(start);

    queue<int> q;
    q.push(start);
    while(!q.empty()){
        for(int it:st[q.front()]){
            if(!mark[it]){
                q.push(it);
                res.push_back(it);
                mark[it] = 1;
            }
        }
        q.pop();
    }
}

void solution(){
    res.clear();
    memset(mark, 0, sizeof(mark));
    cin>>n>>m>>k;
    while(m--){
        int x, y;
        cin>>x>>y;
        st[x].insert(y);
    }
    // dfs(k);
    bfs(k);
    for(int it:res) cout<<it<<" ";
    cout<<endl;
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