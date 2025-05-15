#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

void Try(vector<int> vt){
    if(vt.size()==1){
        cout<<'[';
        cout<<vt[0]<<']'<<endl;
        return;
    }
    cout<<'[';
    for(int i=0; i<int(vt.size()); i++){
        cout<<vt[i];
        if(i!=int(vt.size())-1) cout<<" ";
    }
    cout<<']';
    cout<<endl;
    for(int i=0; i<int(vt.size())-1; i++){
        vt[i] += vt[i+1];
    }
    vt.pop_back();
    Try(vt);
}

void solution(){
    cin>>n;
    vector<int> X(n);
    for(int &it:X) cin>>it;
    Try(X);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}