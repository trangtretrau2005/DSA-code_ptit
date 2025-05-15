#include <bits/stdc++.h>

using namespace std;

char m2c[1001][1001];

pair<int, int> p[4] = {{-1,0}, {1,0}, {0,-1}, {0,1}};

int n,m;

void bfs(int i, int j){
    m2c[i][j] = '.';
    for(int k=0; k<4; k++){
        int i1 = i+p[k].first, j1 = j+p[k].second;
        if( (0<=i1 && i1<n) && (0<=j1 && j1<=m) && m2c[i1][j1] == '#'){\
            bfs(i1,j1);
        }
    }
}

void solution(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>m2c[i][j];
        }
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(m2c[i][j]=='#'){
                cnt++;
                bfs(i,j);
            }
        }
    }
    cout<<cnt; 
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
    return 0;
}