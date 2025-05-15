#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

void solution(){
    string S;
    cin>>S;
    int le = S.length();
    cout<<S[0];
    for(int i=1;i<le;i++){
        if((S[i]=='1' && S[i-1]=='0') || (S[i]=='0' && S[i-1]=='1')){
            cout<<1;
        }
        else cout<<0;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}