#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001];

void solution(){
    string s;
    cin>>s;
    int i=s.length() - 1;
    while(s[i]=='0' && i>=0) s[i--] = '1';
    if(i<0) for(int j=0; j<int(s.length()); j++) cout<<'1';
    else{
        s[i] = '0';
        cout<<s;
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