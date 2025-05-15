#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 123456789

void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];
    for(int i=0;i<n-1;i++) cin>>tmpv[i];
    int i=0;
    while(i<n){
        if(m[i]!=tmpv[i]){
            cout<<i+1<<endl;
            return;
        }
        i++;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}