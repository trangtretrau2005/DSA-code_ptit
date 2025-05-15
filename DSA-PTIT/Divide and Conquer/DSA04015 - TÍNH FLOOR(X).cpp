#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 123456789

char divide(long long n, long long k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= m[n-2]) return divide(n-2, k);
    else return divide(n-1, k-m[n-2]);
}

void solution(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>m[i];
    sort(m,m+n);
    auto it = lower_bound(m,m+n,k);
    if(it == m){ cout<<-1<<endl; return;}
    if(*it == k) cout<<(it-m)+1<<endl;
    else cout<<(it-m)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}