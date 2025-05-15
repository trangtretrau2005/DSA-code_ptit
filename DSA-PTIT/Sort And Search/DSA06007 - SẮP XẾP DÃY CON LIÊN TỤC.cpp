#include <bits/stdc++.h>

using namespace std;

int n, m[100001], tmp[100001];
void solution(){
    cin>>n;
    for(int i=0;i<n;i++) {cin>>m[i]; tmp[i] = m[i];};

    sort(tmp, tmp+n);
    int l, r;
    for(int i=0;i<n;i++){
        if(m[i] != tmp[i]){
            l=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(m[i] != tmp[i]){
            r=i;
            break;
        }
    }
    cout<<l+1<<" "<<r+1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}