#include <bits/stdc++.h>

using namespace std;

int mod = 1e9+7;

long long divide(long long a, long long b){
    if(b == 1) return a;
    long long res = divide(a, b/2);
    res = (res*res)%mod;
    if(b%2==0) return res;
    return (res*a)%mod;
}

void solution(){
    long long a, b;
    while(true){
        cin>>a>>b;
        if(a==0 && b==0) return;
        else if(b==0) cout<<1<<endl;
        else cout<<divide(a,b)<<endl;
    }
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}