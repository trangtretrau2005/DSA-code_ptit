#include <bits/stdc++.h>

using namespace std;

int m[1000001];
void solution(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>m[i];
    int mark=0;
    for(int i=0; i<n-1; i++){
        if(m[i]>m[i+1]){
            mark = i+1;
            break;
        }
    }
    cout<<mark<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}