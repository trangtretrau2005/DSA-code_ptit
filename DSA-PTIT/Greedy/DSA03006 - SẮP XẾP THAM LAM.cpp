#include <bits/stdc++.h>

using namespace std;

int n, m[1000];

void in(){
    for(int i=0;i<n;i++) cout<<m[i]<<" ";
    cout<<endl;
}

void solution(){
    bool check = true;
    cin>>n;
    vector<int> vt(n);
    for(int i=0;i<n;i++){ cin>>m[i]; vt[i] = m[i];}

    sort(m,m+n);
    for(int i=0;i<=n/2;i++){
        if(vt[i] != m[i] && m[i] != vt[n-i-1]){
            check = false;
            break;
        }
    }
    if(check) cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}