#include <bits/stdc++.h>

using namespace std;

long long n, m[100001], slide[100001];

void solution(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>m[i];
        slide[i] = slide[i-1] + m[i];
    }
    for(int i=2;i<n;i++){
        if( slide[i] - m[i] == slide[n] - slide[i]){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}