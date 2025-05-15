#include <bits/stdc++.h>

using namespace std;

int n,m,sta;
set<int> st[10001];
bool mark[10001];
int parent [10001];

vector<int> res;

// void dfs(int sta){
//     cout<<sta<<" ";
//     mark[sta] = true;
//     res.push_back(sta);
//     for(int it:st[sta]) if(!mark[it]) dfs(it);
// }


void bfs(int sta){
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

void dfs(int sta, int x, int y){
    // cout<<sta<<" ";
    mark[sta] = true;
    for(int it:st[sta]){
        if((it==x && sta==y) || (it==y && sta==x)) continue;
        if(!mark[it]) dfs(it, x, y);
    }
}

int count_tplt(int x, int y){
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(!mark[i]){
            cnt++;
            dfs(i, x, y);
        }
    }
    return cnt;
}

void solution(){
    res.clear();
    cin>>n>>m;
    while(m--){
        int x, y;
        cin>>x>>y;
        st[x].insert(y);
        st[y].insert(x);
    }
    
    // dfs(sta);
    // bfs(sta);

    int so_tplt = count_tplt(-1, -1);
    // cout<<so_tplt<<endl;
    for(int i=1; i<=n; i++){
        for(int it:st[i]){
            if(it<i) continue;
            memset(mark, 0, sizeof(mark));
            int x=i, y=it;
            int tmp = count_tplt(x, y);

            if(tmp > so_tplt) cout<<i<<" "<<it<<" ";
        }
    }
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