#include <bits/stdc++.h>

using namespace std;

int n, k, cnt, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;
pair<int,int> direction[2] = {{1,0}, {0,1}};

char mc[10001], mangc[10001];

void in(){
    for(int i=1; i<=n; i++) cout<<mangc[i];
    cout<<endl;
}

bool ktr(){
    for(int i=2;i<n;i++){
        if(mangc[i] == 'A' || mangc[i] == 'E'){
            if(mangc[i-1] != 'E' || mangc[i+1] != 'E' || mangc[i-1] != 'A' || mangc[i+1] != 'A' ) return false;
        }
    }
    return true;
}

void Try(int i){
    if(i==n+1){
        if(ktr()) 
        in();
        return;
    }
    for(int j=1; j<=n; j++){
        if(!lk[j]){
            lk[j] = 1;
            mangc[i] = mc[j];

            Try(i+1);

            lk[j] = 0;
        }
    }
}

void solution(){
    char C;
    cin>>C;
    n = C - 'A' + 1;
    for(int i=1; i<=n; i++) mc[i] = i+64;
    Try(1);
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}