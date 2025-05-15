#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;
    int *m = new int[n];
    for(int i=0; i<n; i++) cin>>m[i];
    sort(m, m+n);
    long long tich1=1LL*m[0]*m[1]*m[n-1], tich2=m[n-1]*m[n-2]*m[n-3];
    cout<<max(tich1, tich2);
    delete [] m;
}

int main(){
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
        solution();
    // }
}