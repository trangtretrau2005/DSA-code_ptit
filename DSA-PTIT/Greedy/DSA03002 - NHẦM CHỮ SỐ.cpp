#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];

void solution(){
    string a,b;
    cin>>a>>b;
    
    // cach 1
    for(int i=0;i<int(a.size());i++){
        if(a[i]=='6') a[i] = '5';
    }
    for(int i=0;i<int(b.size());i++){
        if(b[i]=='6') b[i] = '5';
    }
    cout<<stoi(a) + stoi(b)<<" ";
    for(int i=0;i<int(a.size());i++){
        if(a[i]=='5') a[i] = '6';
    }
    for(int i=0;i<int(b.size());i++){
        if(b[i]=='5') b[i] = '6';
    }
    cout<<stoi(a) + stoi(b)<<endl;
}

int main(){
//    int t;
//    cin>>t;
//    while(t--){
        solution();
//    }
}