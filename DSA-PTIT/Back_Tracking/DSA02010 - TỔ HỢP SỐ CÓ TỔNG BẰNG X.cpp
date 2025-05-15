#include <bits/stdc++.h>

using namespace std;

int n, k, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;                 // D,   L,      R          U
pair<int,int> direction[4] = {{1,0}, {0,-1}, {0,1}, {-1,0}};

void in(int i){
    cout<<'[';
    for(int j=1; j<=i; j++){ cout<<m[tmpv[j]]; if(j!=i) cout<<" ";}
    cout<<']';
}

void Try(int i,int sum){
    if(sum==k){
        in(i-1);
        check=true;
        return;
    }
    for(int j=tmpv[i-1]; j<=n; j++){
        tmpv[i] = j;
        if(m[tmpv[i]] + sum <= k){
            Try(i+1, m[tmpv[i]] + sum);
        }
    }
}

void solution(){
    check=false;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>m[i];
    tmpv[0] = 1;
    Try(1,0);
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