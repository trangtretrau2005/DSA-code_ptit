#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 123456789

long long luythua(long long x, long long y){
    if(y==0) return 1;
    long long res = luythua(x,y/2);
    if(y%2) return res*res*x;
    else return res*res;
}

long long divide(long long n, long long k){
    long long add = luythua(2,n-1);
    if(k == add) return n;
    if(k<add) divide(n-1, k);
    else if(k>add) divide(n-1,k-add);
}

void solution(){
    cin>>n>>k;
    cout<<divide(n,k)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}