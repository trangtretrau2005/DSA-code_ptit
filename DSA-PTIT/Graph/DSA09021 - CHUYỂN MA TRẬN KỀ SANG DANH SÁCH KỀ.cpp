#include <bits/stdc++.h>

using namespace std;

int m2c[1001][1001];

void solution(){
    int n;
    cin>>n;
    vector<int> vt[10001];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>m2c[i][j];
            if(m2c[i][j]==1){
                vt[i].push_back(j);
                // vt[j].push_back(i);
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int it:vt[i]) cout<<it<<" ";
        cout<<endl;
    }
}

int main(){
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
        solution();
    // }
}