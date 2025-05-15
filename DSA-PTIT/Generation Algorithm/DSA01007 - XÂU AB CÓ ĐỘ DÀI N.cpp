#include <bits/stdc++.h>

using namespace std;

int n, m[100001], tmpv[100001], lk[100001], tmp[100001];

char mc[100];
void in(){
    for(int i=1; i<=n; i++) cout<<mc[i];
    cout<<" ";
}
void Try(int i){
    if(i==n+1){
        in();
        return;
    }
    for(char j='A'; j<='B'; j++){
        mc[i] = j;
        Try(i+1);
    }
}

void solution(){
    cin>>n;
    Try(1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}