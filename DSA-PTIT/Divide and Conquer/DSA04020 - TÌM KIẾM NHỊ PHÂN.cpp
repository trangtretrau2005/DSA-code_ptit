#include <bits/stdc++.h>

using namespace std;

int m[100001], n, k;

int binary_sea(int x){
    int r = n-1, l=0, mid;
    while(l<=r){
        mid = (l+r)/2;
        if(m[mid] == x) return mid+1;
        else if(m[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}

void solution(){
    cin>>n>>k;
    for(int i=0; i<n; i++) cin>>m[i];

    if(!binary_sea(k)) cout<<"NO\n";
    else cout<<binary_sea(k)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}