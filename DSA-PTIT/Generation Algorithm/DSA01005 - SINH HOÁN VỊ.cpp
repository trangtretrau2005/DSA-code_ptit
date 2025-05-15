#include <bits/stdc++.h>

using namespace std;

int n, m[100001], tmpv[100001], lk[100001], tmp[100001];

int k;
void in(){
    for(int i=1;i<=n;i++) cout<<tmp[i];
    cout<<" ";
}

void Try(int i){
    if(i==n+1){
        in();
        return;
    }
    for(int j=1;j<=n;j++){
        if(!lk[j]){
            lk[j]=1;
            // cach 1 luu vi tri
            // tmpv[i] = j;

            // cach 2 luu gia tri
            tmp[i] = m[j];
            Try(i+1);
            lk[j]=0;
        }
    }
}

void solution(){
    cin>>n;
    for(int i=1;i<=n;i++) m[i] = i;
    Try(1);
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}