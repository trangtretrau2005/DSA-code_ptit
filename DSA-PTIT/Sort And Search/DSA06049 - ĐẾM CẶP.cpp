#include <bits/stdc++.h>

using namespace std;

int m[100001];

void solution(){
    int n, k;
    cin>>n>>k;
    for(int i=0; i<n; i++) cin>>m[i];
    sort(m, m+n);
    long long cnt=0;
    for(int i=0; i<n; i++){
        int tmp = lower_bound(m+i+1, m+n, m[i]+k)-m;
        cnt += tmp - 1 - i;
    }
    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}