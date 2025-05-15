#include <bits/stdc++.h>

using namespace std;

int n, m[100001];

void in(){
    for(int i=1;i<=n;i++) cout<<m[i]<<" ";
    cout<<endl;
}

bool ktr(){
    int l=1, r=n;
    while(l<r) if(m[l++] != m[r--]) return false;
    return true;
}

bool generation(){
    int i=n;
    while(m[i] == 1 && i>0) m[i--] = 0;
    if(i==0) return false;
    else{
        m[i] = 1;
    }
    return true;
}

void solution(){
    cin>>n;
    in();
    while(generation()){
        if(ktr()) in();
    }
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}