#include <bits/stdc++.h>

using namespace std;

int mod = 1e9+7;
struct ma_tran{
    long long x = 1, y = 1, z = 1, w = 0;
    // x y
    // z w
    friend ma_tran operator * (const ma_tran a, ma_tran b){
        ma_tran res;
        res.x = (a.x*b.x)%mod + (a.y*b.z)%mod; res.x %= mod;
        res.y = (a.x*b.y)%mod + (a.y*b.w)%mod; res.y %= mod;
        res.z = (a.z*b.x)%mod + (a.w*b.z)%mod; res.z %= mod;
        res.w = (a.z*b.y)%mod + (a.w*b.w)%mod; res.w %= mod;
        return res;
    }
};

ma_tran divide(int x, ma_tran X){
    if(x<=1) return X;
    ma_tran res;
    res = divide(x/2, X*X);
    if(x%2==0) return res*res;
    return X*res*res;
}

void solution(){
    int n;
    cin>>n;
    ma_tran bas;
    ma_tran res = divide(n, bas);
    cout<<res.w<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}