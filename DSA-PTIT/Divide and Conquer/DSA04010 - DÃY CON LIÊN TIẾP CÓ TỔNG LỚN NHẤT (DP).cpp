#include <bits/stdc++.h>

using namespace std;

int m[100001];

void solution(){
    int n;
    cin>>n;
    // kande algorithm
    for(int i=0; i<n; i++) cin>>m[i];
    int res = 0, max_tmp = 0;
    for(int i=0; i<n; i++){
        max_tmp = max(max_tmp + m[i], m[i]);
        res = max(res, max_tmp);
    }
    cout<<res<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}