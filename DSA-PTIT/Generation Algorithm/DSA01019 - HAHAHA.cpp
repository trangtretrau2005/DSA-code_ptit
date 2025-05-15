#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001];

char mc[100001];
void in(){
    for(int i=0;i<n;i++) cout<<mc[i];
    cout<<endl;
}

bool ktr(){
    if(mc[0]!='H' || mc[n-1]!='A') return false;
    for(int i=0;i<n-1;i++){
        if(mc[i] == 'H' && mc[i+1] == 'H') return false;
    }
    return true;
}

void Try(int i){
    if(i==n){
        if(ktr()) in();
        return;
    }
    for(int j=0; j<=1; j++){
        if(j==0) mc[i] = 'A';
        else mc[i] = 'H';
        Try(i+1);
    }
}

void solution(){
    cin>>n;
    Try(0);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}