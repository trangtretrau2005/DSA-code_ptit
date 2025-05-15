#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];

bool check;

void in(int i){
    cout<<'[';
    for(int j=1;j<=i;j++){
        cout<<m[tmpv[j]];
        if(j!=i) cout<<" ";
    }
    cout<<']';
}

void Try(int i, int s){
    if(s==k){
        in(i-1);
        cout<<" ";
        check = true;
        return;
    }
    for(int j=tmpv[i-1] + 1; j<=n; j++){
        tmpv[i] = j;
        if(s + m[tmpv[i]] <= k){
            Try(i+1, s+m[tmpv[i]]);
        }
    }
}

void solution(){
    check = false;
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>m[i];
    sort(m+1,m+n+1);
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