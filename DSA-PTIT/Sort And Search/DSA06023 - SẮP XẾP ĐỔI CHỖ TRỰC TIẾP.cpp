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

    for(int i=0;i<n;i++){
        bool check = false;
        for(int j=i+1;j<n;j++){
            if(m[i]>m[j]) {
                swap(m[i], m[j]);
                check=true;
            }
        }
        if(check){
            cout<<"Buoc "<<i+1<<": ";
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