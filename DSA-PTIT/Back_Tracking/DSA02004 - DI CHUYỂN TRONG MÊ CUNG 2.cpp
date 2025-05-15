#include <bits/stdc++.h>

using namespace std;

int n, k, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;                 // D,   L,      R          U
pair<int,int> direction[4] = {{1,0}, {0,-1}, {0,1}, {-1,0}};

string res;
void Try(int i, int j){
    if(i==n && j==n){
        cout<<res<<" ";
        check=true;
        return;
    }
    for(int u=0; u<4; u++){
        int i1=i + direction[u].first, j1=j + direction[u].second;
        if((i1>0 && i1<=n) && (j1>0 && j1<=n) && (m2c[i1][j1] == 1)){

            m2c[i1][j1] = 0;

            if(u==0) res += 'D';
            else if(u==1) res += 'L';
            else if(u==2) res += 'R';
            else res += 'U';
            Try(i1,j1);

            m2c[i1][j1] = 1;
            res.pop_back();
        }
    }
}

void solution(){
    res=""; check = false; cin>>n;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>m2c[i][j];
    Try(1,1);
    if(!check) cout<<-1;
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}