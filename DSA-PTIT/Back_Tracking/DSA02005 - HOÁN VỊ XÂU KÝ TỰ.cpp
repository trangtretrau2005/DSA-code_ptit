#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];

string s;
char mc[10001];
void in(){                  //cach 2
    for(int i=0; i<n; i++) cout<<mc[i];     // cach 1 cout<<s[tmpv[i]];
    cout<<" ";
}

void Try(int i){
    if(i==n){
        in();
    }
    for(int u=0; u<n; u++){
        if(!lk[u]){
            lk[u] = 1;
            // cach 1
            // tmpv[i] = u; 

            // cach 2
            mc[i] = s[u];
            Try(i+1);

            lk[u] = 0;
        }
    }
}

void solution(){
    // string s;
    s="";
    cin>>s; n = s.length();
    sort(s.begin(), s.end());
    Try(0);
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}