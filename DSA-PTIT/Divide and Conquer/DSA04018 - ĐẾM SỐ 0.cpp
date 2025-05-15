#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 123456789

void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];
    long long *it = upper_bound(m,m+n,0);
    if(it == m) cout<<0<<endl;
    else cout<<it-m<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}