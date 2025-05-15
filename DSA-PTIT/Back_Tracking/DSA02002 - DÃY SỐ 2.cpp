#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

vector<string> res;
void Try(vector<int> vt){
    string S="[";
    if(vt.size()==1){
        S += to_string(vt[0]) + ']';
        res.push_back(S);
        return;
    }
    for(int i=0; i<int(vt.size()); i++){
        S += to_string(vt[i]);
        if(i!=int(vt.size())-1) S += " ";
    }
    S += ']';
    res.push_back(S);
    for(int i=0; i<int(vt.size())-1; i++){
        vt[i] += vt[i+1];
    }
    vt.pop_back();
    Try(vt);
}

void solution(){
    res.clear();
    cin>>n;
    vector<int> X(n);
    for(int &it:X) cin>>it;
    Try(X);
    for(int i=res.size()-1; i>=0; i--) cout<<res[i]<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}