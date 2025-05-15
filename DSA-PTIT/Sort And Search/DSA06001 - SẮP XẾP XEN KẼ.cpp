#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *m = new int[n];
        for(int i=0;i<n;i++) cin>>m[i];

        sort(m, m+n);

        int l=0,r=n-1;
        while(l<r){
            cout<<m[r]<<" "<<m[l]<<" ";
            l++; r--;
        }
        if(n%2) cout<<m[l];
        cout<<endl;
        delete [] m;
    }
}