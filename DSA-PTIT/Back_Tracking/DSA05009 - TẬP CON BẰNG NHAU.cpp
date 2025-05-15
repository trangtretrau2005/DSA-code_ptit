#include <bits/stdc++.h>

using namespace std;

int n, k, cnt, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;
pair<int,int> direction[2] = {{1,0}, {0,1}};

char mc[10001], mangc[10001];

void in(){
    for(int i=1; i<=n; i++) cout<<mang[i];
    cout<<endl;
}

void Try(int i, int sum){
    if(!check){
        if(sum == k){
            check = true;
            return;
        }
        for(int j=tmpv[i-1]+1;j<=n;j++){
            tmpv[i] = j;
            if(m[tmpv[i]] + sum <= k){
                Try(i+1, m[tmpv[i]] + sum);
            }
        }
    }
}

void solution(){
    check = false; k=0;
    cin>>n;
    for(int i=1; i<=n; i++){ cin>>m[i]; k+=m[i];}
    if(k%2==0){
        sort(m+1, m+1+n);
        Try(1,0);
        if(check) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}