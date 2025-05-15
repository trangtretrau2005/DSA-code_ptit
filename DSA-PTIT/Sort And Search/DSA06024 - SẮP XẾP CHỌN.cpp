#include <bits/stdc++.h>

using namespace std;

int n, m[1000];

void in(){
    for(int i=0;i<n;i++) cout<<m[i]<<" ";
    cout<<endl;
}

void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];

    // int cnt=1;
    // for(int i=0;i<n;i++){
    //     int min1=m[i], vtri=i;
    //     // bool check = false;
    //     for(int j=i+1;j<n;j++){
    //         if(min1 > m[j]){
    //             min1 = m[j];
    //             vtri = j;
    //             // check = true;
    //         }
    //     }
    //     if(i<n-1){
    //         swap(m[i], m[vtri]);
    //         cout<<"Buoc "<<cnt++<<": ";
    //         in();
    //     }
    // }


    vector<int> tmp(m,m+n);
    sort(tmp.begin(), tmp.end());
    int l=1;
    for(int i=0;i<n;i++){
        // bool check = false;
        // if(m[i] == tmp[i]) continue;
        for(int j=i+1;j<n;j++){
            if(tmp[i] == m[j]) {
                swap(m[i], m[j]);
                // check=true;
                break;
            }
        }
        if(i<n-1){
            cout<<"Buoc "<<l++<<": ";
            in();
        }
    }
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}