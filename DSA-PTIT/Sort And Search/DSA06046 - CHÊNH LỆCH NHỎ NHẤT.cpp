#include <bits/stdc++.h>

using namespace std;

int n, m[100001];
void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];
    sort(m,m+n);
    int mi1=INT_MAX;
    for(int i=1;i<n;i++){
        mi1 = min(m[i]-m[i-1], mi1);
    }
    cout<<mi1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}