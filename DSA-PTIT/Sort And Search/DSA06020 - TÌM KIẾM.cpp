#include <bits/stdc++.h>

using namespace std;

int n,x;
int m[100001];
void solution(){
    cin>>n>>x;
    for(int i=0;i<n;i++) cin>>m[i];
    sort(m, m+n);
    if(binary_search(m, m+n, x)) cout<<1<<endl;
    else cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}