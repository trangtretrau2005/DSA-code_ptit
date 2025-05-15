#include <bits/stdc++.h>

using namespace std;

int n, m[10001];

int sang[1000001];

void ss(){
    sang[0] = 1;
    sang[1] = 1;
    for(int i=2;i<=sqrt(1000001);i++){
        if(sang[i]==0){
            for(int j=i*i; j<=1000001; j+=i) sang[j] = 1;
        }
    }
}

void solution(){
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(!sang[i] && !sang[n-i]){
            cout<<i<<" "<<n-i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    ss();
    // for(int i=2;i<=100001;i++) if(!sang[i]) cout<<i<<'-';
    while(t--){
        solution();
    }
}