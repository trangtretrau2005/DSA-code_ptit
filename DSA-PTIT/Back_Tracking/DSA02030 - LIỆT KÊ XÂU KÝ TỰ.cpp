#include <bits/stdc++.h>

using namespace std;

int n, k, cnt, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;
pair<int,int> direction[2] = {{1,0}, {0,1}};

char mc[10001], mangc[10001];
// void Try(int i, int st){
//     if(i==k+1){
//         for(int u=1; u<=k; u++){
//             cout<<mangc[u];
//         }
//         cout<<endl;
//         return;
//     }
//     // cach 1 duyet theo gia tri
//     for(int j=st; j<=n; j++){
//         mangc[i] = mc[j];
//         Try(i+1, j);
//     }
// }

// cach 2 duyet theo tmpv[]
void Try(int i){
    if(i==k+1){
        for(int j=1; j<=k; j++) cout<<mc[tmpv[j]];
        cout<<endl; return;
    }
    for(int j=tmpv[i-1]; j<=n; j++){
        tmpv[i] = j;
        Try(i+1);
    }
}

void solution(){
    char C;
    cin>>C>>k;
    n = C-'A' + 1;
    for(int i=1;i<=n;i++) mc[i] = i+64;
    tmpv[0] = 1;
    Try(1);
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}