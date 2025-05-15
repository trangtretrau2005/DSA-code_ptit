#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], mark[1000001];

void solution(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>m[i];
    sort(m,m+n);

    // cach 1
    bool check=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(binary_search(m,m+n,k-m[i]-m[j])){
                check = true;
                break;
            }
        }
        if(check) break;
    }

    //cach 2
    // for(int i=0;i<n;i++){
    //     int l=i+1, r=n-1;
    //     while(l<r){
    //         if(m[i] + m[l] + m[r] == k){
    //             check = true;
    //             break;
    //         }
    //         else if(m[i] + m[l] + m[r] < k) l++;
    //         else r--;
    //     }
    //     if(check) break;
    // }
    // if(check) cout<<"YES\n";
    // else cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}