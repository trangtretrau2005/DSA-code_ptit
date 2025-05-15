#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

vector<string> res;
void Try(int i){
    if(i==k+1){
        string S="";
        for(int u=1;u<=k;u++) S += to_string(m[tmpv[u]]) + " ";
        res.push_back(S);
        return;
    }
    for(int j=tmpv[i-1] + 1; j<=n; j++){
        tmpv[i] = j;
        Try(i+1);
    }
}

void solution(){
    res.clear();
    string S="";
    cin>>n>>k;
    for(int i=1;i<=k;i++){ cin>>tmp[i]; S += to_string(tmp[i]) + " ";}
    for(int i=1;i<=n;i++) m[i] = i;
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