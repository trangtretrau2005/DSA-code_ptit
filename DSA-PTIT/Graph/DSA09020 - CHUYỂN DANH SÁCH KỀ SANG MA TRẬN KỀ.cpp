#include <bits/stdc++.h>

using namespace std;

int m2c[1001][1001];

void solution(){
    int n;
    cin>>n; cin.ignore();
    for(int i=1; i<=n; i++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        while(ss>>s){
            int tmp = stoi(s);
            m2c[i][tmp] = 1;
        }
    }

    for(int i=1; i<=n; i++){ for(int j=1; j<=n; j++) cout<<m2c[i][j]<<" "; cout<<endl;}
}

int main(){
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
        solution();
    // }
}