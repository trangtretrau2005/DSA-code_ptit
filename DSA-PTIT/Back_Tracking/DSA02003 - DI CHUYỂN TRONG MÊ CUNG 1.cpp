#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];

bool check;
pair<int,int> p[2] = {{1,0}, {0,1}};

string res = "";
void Try(int i, int j){
    if(i == n-1 && j == n-1){
        check = true;
        cout<<res<<" ";
        return;
    }

    for(int u=0; u<=1; u++){
        int i1=p[u].first + i, j1=p[u].second + j;
        if((i1>=0 && i1<n) && (j1>=0 && j1<n) && (m2c[i1][j1]==1)){
            if(u==0) res += 'D';
            else res += 'R';

            Try(i1, j1);

            res.pop_back();
        }
    }
}

void solution(){
    check=false;
    res="";
    cin>>n;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>m2c[i][j];
    if(m2c[0][0]==0){
        cout<<-1<<endl;
        return;
    }
    Try(0,0);
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