#include <bits/stdc++.h>

using namespace std;

int x;
bool cmp(int a, int b){
    if(abs(x-a) == abs(x-b)) return a < b;
    return abs(x-a) < abs(x-b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n>>x;
        int *m = new int[n];

        for(int i=0;i<n;i++) cin>>m[i];
        sort(m, m+n, cmp);
        for(int i=0;i<n;i++) cout<<m[i]<<" ";
        cout<<endl;

        delete [] m;
    }
}