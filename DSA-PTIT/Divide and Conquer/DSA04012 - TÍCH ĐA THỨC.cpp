#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n, m; cin>>n>>m;
    vector<long long> a(n), b(m);
    for(long long &it:a) cin>>it;
    for(long long &it:b) cin>>it;
    vector<long long> res(n+m-1);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            res[i+j] += a[i]*b[j];
        }
    }

    for(int it:res) cout<<it<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}