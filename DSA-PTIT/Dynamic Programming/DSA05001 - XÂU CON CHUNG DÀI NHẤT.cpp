#include <bits/stdc++.h>

using namespace std;

long long n, k, m[100001], tmpv[10001], m2c[1000][1000];
#define mod 123456789

void solution(){
    string a,b;
    cin>>a>>b;
    int la = a.length(), lb = b.length();
    for(int i=0;i<la;i++){
        for(int j=0; j<lb; j++){
            if(a[i] == b[j]) m2c[i+1][j+1] = m2c[i][j] + 1;
            else m2c[i+1][j+1] = max(m2c[i][j+1], m2c[i+1][j]);
        }
    }

    // for(int i=1;i<la+1;i++){ for(int j=1; j<lb+1; j++) cout<<m2c[i][j]<<" "; cout<<endl;}
    cout<<m2c[la][lb]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}