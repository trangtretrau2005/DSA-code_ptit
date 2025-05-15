#include <bits/stdc++.h>

using namespace std;

int mod = 1e9+7;

struct ma_tran{
    int n;
    long long m2c[11][11];
    void nhap(){
        for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>>m2c[i][j];
    }

    friend ma_tran operator * (const ma_tran a, ma_tran b){
        ma_tran res; res.n = a.n;
        for(int i=0; i<a.n; i++){
            for(int j=0; j<a.n; j++){
                res.m2c[i][j] = 0;
                for(int k = 0; k<a.n; k++){
                    res.m2c[i][j] += (a.m2c[i][k]*b.m2c[k][j])%mod;
                }
                res.m2c[i][j] %= mod;
            }
        }
        return res;
    }
};

ma_tran divide(long long n, ma_tran X){
    if(n<=1) return X;
    ma_tran res;
    res = divide(n/2, X);
    if(n%2==0) return res*res;
    return X*res*res;
}

void solution(){
    long long k, n; cin>>n>>k;
    ma_tran a; a.n = n;
    a.nhap();
    a = divide(k, a);
    long long res = 0;
    for(int i=0; i<n; i++) res += a.m2c[i][n-1];
    res %= mod;
    cout<<res<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
    return 0;
}
