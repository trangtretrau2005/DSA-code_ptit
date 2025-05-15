#include <bits/stdc++.h>

using namespace std;

int mod = 1e9+7;

struct ma_tran{
    int n;
    long long m2c[11][11];
    void nhap(){
        for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>>m2c[i][j];
    }
    void in(){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<m2c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    friend ma_tran operator * (const ma_tran a, ma_tran b){
        ma_tran res; res.n = a.n;
        for(int i=0; i<a.n; i++){
            for(int j=0; j<a.n; j++){
                res.m2c[i][j] = 0;
                for(int k=0; k<a.n; k++) res.m2c[i][j] += (a.m2c[i][k]*b.m2c[k][j])%mod;
                res.m2c[i][j] %= mod;
            }
        }
        return res;
    }
};

ma_tran divide(ma_tran A, int k){
    if(k == 1) return A;
    ma_tran res = divide(A, k/2);
    res = res*res;
    if(k%2==0) return res;
    return res*A;
}

void solution(){
    int n, k;
    cin>>n>>k;
    ma_tran base; base.n = n; base.nhap();
    ma_tran res = divide(base, k);
    res.in();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}