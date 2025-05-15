#include <bits/stdc++.h>

using namespace std;

int n, k, cnt, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;
pair<int,int> direction[2] = {{1,0}, {0,1}};

void in(){
    for(int i=1;i<=8;i++) cout<<m[i];
    cout<<endl;
}

bool ktr(){
    if(m[3] == 2 || m[5] == 0 || (m[1] == 0 && m[2] == 0)) return false;
    int l=1, r=8;
    while(l<r) if(m[l++]!=m[r--]) return false;
    return true;
}

void Try(int i){
    if(i==9){
        if(ktr()) in();
        return;
    }
    for(int j=0;j<=1;j++){
        if(j==0) m[i] = 0;
        else m[i] = 2;
        Try(i+1);
    }
}

void solution(){
    Try(1);
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}