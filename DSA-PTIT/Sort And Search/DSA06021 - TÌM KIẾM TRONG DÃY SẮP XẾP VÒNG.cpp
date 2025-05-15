#include <bits/stdc++.h>

using namespace std;

int n,x;
int m[1000001];

void solution(){
    cin>>n>>x;
    int ngat=0;
    for(int i=1;i<=n;i++){
        cin>>m[i];
        if(m[i]<m[i-1]) ngat=i-1;
    }
    if(binary_search(m+1, m+ngat+1, x)){
        cout<<lower_bound(m+1, m+ngat+1, x)-m<<endl;
    }
    else cout<<lower_bound(m+ngat+1, m + n + 1, x) - m<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}