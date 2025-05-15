#include <bits/stdc++.h>

using namespace std;

int mod = 1e9+7;
long long value[35];

void init(){
    value[0] = 1; value[1] = 2;
    for(int i=2; i<35; i++) value[i] = 2*value[i-1];
}

void solution(){
    string a,b;
    cin>>a>>b;
    long long va=0, vb=0;
    for(int i=0; i<int(a.length()); i++) if(a[i]=='1') va += value[int(a.length())-i-1];
    for(int i=0; i<int(b.length()); i++) if(b[i]=='1') vb += value[int(b.length())-i-1];
    cout<<va*vb<<endl;
}

int main(){
    int t;
    cin>>t;
    init();
    while(t--){
        solution();
    }
}