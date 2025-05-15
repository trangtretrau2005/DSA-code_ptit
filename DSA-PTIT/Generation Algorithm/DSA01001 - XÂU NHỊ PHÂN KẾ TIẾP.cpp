#include <bits/stdc++.h>

using namespace std;

int n, m[100001], mark[100001];

void solution(){
    string tmp;
    cin>>tmp;
    for(int i=0;i<int(tmp.length());i++) m[i] = tmp[i] - '0';

    int j=tmp.length()-1;
    while(j>=0 && m[j]==1) m[j--] = 0;
    if(j<0){
        for(int i=0; i<int(tmp.length());i++) cout<<"0";
    }
    else{
        m[j] = 1;
        for(int i=0; i<int(tmp.length());i++) cout<<m[i];
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    // cin.ignore();
    while(t--){
        solution();
    }
}