#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 123456789

void tao_mang_fibo(){
    m[1] = 1;
    m[2] = 1;
    for(int i=3;i<=92;i++){
        m[i] = m[i-2] + m[i-1];
    }
}

char divide(long long n, long long k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= m[n-2]) return divide(n-2, k);
    else return divide(n-1, k-m[n-2]);
}

void solution(){
    cin>>n>>k;
    cout<<divide(n,k)<<endl;
}

int main(){
    int t;
    cin>>t;
    tao_mang_fibo();
    while(t--){
        solution();
    }
}