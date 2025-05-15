#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;
    int *m = new int[n];
    int *mark = new int[1000002];
    int cnt = 1;
    for(int i=0; i<n; i++){
        cin>>m[i];
        mark[m[i]] = mark[m[i]-1]+1;
        cnt = max(cnt, mark[m[i]]);
    }
    
    cout<<n-cnt<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
        solution();
    // }
}