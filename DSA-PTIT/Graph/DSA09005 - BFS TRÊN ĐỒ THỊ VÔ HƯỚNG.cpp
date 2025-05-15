#include <bits/stdc++.h>

using namespace std;

int n,m,sta;
bool mark[10001];
int parent [10001];

vector<int> res;

// void dfs(int sta){
//     cout<<sta<<" ";
//     mark[sta] = true;
//     res.push_back(sta);
//     for(int it:st[sta]) if(!mark[it]) dfs(it);
// }


void bfs(int sta, set<int> st[]){
    queue<int> q;
    q.push(sta);
    mark[sta] = true;
    res.push_back(sta);

    while(!q.empty()){
        for(int it:st[q.front()]){
            if(!mark[it]){
                q.push(it);
                res.push_back(it);
                mark[it] = true;
            }
        }
        q.pop();
    }
}

void solution(){
    res.clear();
    set<int> st[10001];
    memset(mark, 0, sizeof(mark));
    cin>>n>>m>>sta;
    while(m--){
        int x, y;
        cin>>x>>y;
        st[x].insert(y);
        st[y].insert(x);
    }
    
    // dfs(sta);
    bfs(sta, st);
    for(int it:res) cout<<it<<" ";
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