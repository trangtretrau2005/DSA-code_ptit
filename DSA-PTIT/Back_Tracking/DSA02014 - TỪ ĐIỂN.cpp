#include <bits/stdc++.h>

using namespace std;

int n, k, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;

char mc[100][100];
pair<int,int> direction[8] = {{-1,-1}, {-1,0}, {-1,1}, {0,1}, {1,1}, {1,0}, {1,-1}, {0,-1}};
int a,b;

void Try(int i, int j, int dem, string S){
    if(!check){
        if(dem == int(S.length())){
            check=true;
            return;
        }
        for(int u=0; u<8; u++){
            int i1 = i+direction[u].first, j1 = j+direction[u].second;
            if((i1>0 && i1<=a) && (j1>0 && j1<=b) && mc[i1][j1] == S[dem]){
                Try(i1, j1, dem+1, S);
            }
        }
    }
}

void solution(){
    cin>>k>>a>>b;
    vector<string> vts(k);
    for(string &it:vts) cin>>it;

    for(int i=1;i<=a;i++) for(int j=1;j<=b;j++) cin>>mc[i][j];

    for(string X:vts){
        check=false;
        for(int i=1; i<=a; i++){
            for(int j=1; j<=b; j++){
                if(mc[i][j] == X[0]){
                    Try(i,j,1,X);
                    if(check) break;
                }
            }
            if(check) break;
        }
        if(check) cout<<X<<" ";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}