#include <bits/stdc++.h>

using namespace std;

int n, m[1000001], Amin[1000001], Amax[1000001];

void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];

    // cach 1
    int max1=-1;
    for(int i=0;i<n-1;i++){
        int j = n-1;
        while(m[i] >= m[j]) j--;
        max1 = max(max1, j-i);
    }
    cout<<max1<<endl;
    // // cach 2

    // int max2=-1;
    // // xet 2 mang min va max
    // Amin[0] = m[0];
    // for(int i=1;i<n;i++) Amin[i] = min(Amin[i-1], m[i]);
    // Amax[n-1] = m[n-1];
    // for(int i=n-2;i>=0;i--) Amax[i] = max(Amax[i+1], m[i]); // duyet max tu phai -> trai de xet cac max j

    // int i=0, j=0;
    // while(i<n && j<n){
    //     if(Amin[i] < Amax[j]){
    //         max2=max(j-i, max2);
    //         j++;
    //     }
    //     else i++;
    // }
    // cout<<max2;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}