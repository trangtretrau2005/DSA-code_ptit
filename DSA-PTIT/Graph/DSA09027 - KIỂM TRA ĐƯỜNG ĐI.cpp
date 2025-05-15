#include <bits/stdc++.h>

using namespace std;

int m2c[1001][1001], mark[1001], parent[1001], check[1001];
int n, m, k, p;
set<int> st[1001];

vector<int> res;
void dfs(int start, int val){
    mark[start] = 1;
    check[start] = val;
    for(int it:st[start]){
        if(!mark[it]){
            // parent[it] = start;
            check[it] = val;
            dfs(it, val);
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
    // bfs(k);

    int tmp = 1;
    for(int i=1; i<=n; i++){
        if(!mark[i]){
            dfs(i, tmp++);
        }
    }

    cin>>p;
    while(p--){
        int x, y;
        cin>>x>>y;
        if(check[x] == check[y]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    cout<<endl;
    memset(mark, 0, sizeof(mark));
    memset(check, 0, sizeof(check));
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