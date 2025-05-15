#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

vector<string> res;
void Try(int i){
    if(i==n+1){
        string S="";
        for(int u=1;u<=n;u++) S += to_string(mang[u]) + " ";
        res.push_back(S);
        return;
    }
    for(int j=1;j<=n;j++){
        if(!lk[j]){
            lk[j] = 1;

            mang[i] = m[j];
            Try(i+1);

            lk[j] = 0;
        }
    }
}

void solution(){
    res.clear();
    string S="";
    cin>>n;
    for(int i=1;i<=n;i++){ cin>>tmp[i]; m[i] = i; S += to_string(tmp[i]) + " ";}
    Try(1);
    for(int i=0;i<int(res.size());i++){
        if(S==res[i]){cout<<i+1<<endl; return;}
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}