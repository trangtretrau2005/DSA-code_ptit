#include <bits/stdc++.h>

using namespace std;

int n, m[100001], tmpv[100001], lk[100001], tmp[100001];
vector<string> vts;

void Try(int i){
    if(i==n+1){
        string S="";
        for(int i=1;i<=n;i++) S += to_string(tmp[i]);
        vts.push_back(S);
        return;
    }
    for(int j=1; j<=n; j++){
        if(!lk[j]){
            lk[j] = 1;

            tmp[i] = m[j];
            // hoac la tmpv[i] = j;
            Try(i+1);

            lk[j] = 0;
        }
    }
}

void solution(){
    vts.clear();
    cin>>n;
    for(int i=1;i<=n;i++) m[i] = i;
    Try(1);
    for(int i=int(vts.size())-1 ;i>=0 ; i--) cout<<vts[i]<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}