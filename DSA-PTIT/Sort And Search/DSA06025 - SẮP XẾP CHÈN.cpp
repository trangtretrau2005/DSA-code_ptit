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
        int j=i-1;
        int key = m[i];
        while(j>=0 && key < m[j]){
            m[j+1] =  m[j];
            j--;
        }
        m[j+1] = key;
        cout<<"Buoc "<<i<<": ";
        for(int k=0;k<=i;k++) cout<<m[k]<<" ";
        cout<<endl;
    }
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}