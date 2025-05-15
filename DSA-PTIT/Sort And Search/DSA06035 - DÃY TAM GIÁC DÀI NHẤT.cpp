#include <bits/stdc++.h>

using namespace std;

int ma[100001], mb[100001], m[100001];
int n;

void solution(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m[i];
    }

    fill(ma, ma+n, 1);
    fill(mb, mb+n, 1);
    for(int i=1; i<n; i++){
        if(m[i-1]<m[i]) ma[i] = ma[i-1]+1;
    }
    for(int i=n-2; i>=0; i--){
        if(m[i+1]<m[i]) mb[i] = mb[i+1]+1;
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
        // cout<<ma[i]<<'-'<<mb[i]<<" ";
        cnt = max(cnt, mb[i]+ma[i]-1);
    }
    cout<<cnt<<endl;
    // cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}