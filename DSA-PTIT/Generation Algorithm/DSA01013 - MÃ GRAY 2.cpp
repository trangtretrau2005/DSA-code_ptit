#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

void solution(){
    string S;
    cin>>S;
    cout<<S[0];
    char mc[100]; int u=1; mc[0] = S[0];
    for(int i=1; i<int(S.length());i++){
        if(S[i]=='0'){
            mc[u] = mc[u-1];
            u++;
        }
        else{
            if(mc[i-1]=='1') mc[u] = '0';
            else mc[u] = '1';
            u++;
        }
    }
    for(int j=1; j<u; j++) cout<<mc[j];
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}