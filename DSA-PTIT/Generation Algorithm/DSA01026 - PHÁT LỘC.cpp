#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

void in(){
    for(int i=1;i<=n;i++) cout<<m[i];
    cout<<endl;
}

bool ktr(){
    if(m[1] != 8 || m[n] != 6) return false;
    for(int i=1;i<n;i++){
        if(m[i] == 8 && m[i+1] == 8) return false;
        int cnt = 0;
        while(m[i] == 6 && i<=n){
            cnt++;
            i++;
        }
        if(cnt!=0){
            if(cnt>3) return false;
            else i--;
        }
    }
    return true;
}

void Try(int i){
    if(i==n+1){
        if(ktr()) in();
        return;
    }
    for(int j=0;j<=1;j++){
        if(j==0) m[i] = 6;
        else m[i] = 8;
        Try(i+1);
    }
}

void solution(){
    cin>>n;
    for(int i = 1; i<=n; i++) m[i] = 6;
    Try(1);
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}