#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], mark[1000001];

void solution(){
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>m[i];
        mp[m[i]]++;
    }
    bool check = false;
    for(int i=0;i<n;i++){
        if(mp[m[i]] != 1){
            check = true;
            cout<<m[i]<<endl;
            break;
        } 
    }
    if(!check) cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}