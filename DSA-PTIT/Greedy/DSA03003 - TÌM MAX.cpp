#include <bits/stdc++.h>

using namespace std;

long long n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];

#define mod 1000000007
void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];
    sort(m,m+n);
    long long max1 = 0;
    for(int i=0;i<n;i++){
        max1 += ((i*m[i]) % mod);
        max1 %= mod;
    }
    cout<<max1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}