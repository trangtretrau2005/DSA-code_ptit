#include <bits/stdc++.h>

using namespace std;

int m2c[1001][1001], mark[10001], parent[10001], check[10001];
int n, m, k;
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


pair<int,int> p[8] = {{-1,-1}, {-1,0}, {-1,1}, {0,1}, {0,-1}, {1,-1}, {1,0}, {1,1}};
void quaylui(int i, int j){
    m2c[i][j] = 0;
    for(int k=0; k<8; k++){
        int i1 = i+p[k].first, j1 = j+p[k].second;
        if(m2c[i1][j1] == 1) quaylui(i1,j1);
    }
}
void solution(){
    cin>>n>>m;
    for(int i=0; i<n; i++) for(int j=0; j<m;j++) cin>>m2c[i][j];

    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(m2c[i][j]){
                cnt++;
                quaylui(i,j);
            }
        }
    }
    cout<<cnt;
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