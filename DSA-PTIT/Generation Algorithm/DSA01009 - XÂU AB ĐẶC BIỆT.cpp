#include <bits/stdc++.h>

using namespace std;

int n, k, res=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

char mc[100001];
void in(){
    for(int i=1; i<=n; i++) cout<<mc[i];
    cout<<endl;
}

bool ktr(){
    for(int i=1;i<=n;i++){
        int cnt=0;
        while(mc[i]=='A' && i<=n){
            i++;
            cnt++;
        }
        if(cnt==k) return true;
        if(cnt!=0) i--;
    }
    return false;
}

vector<string> vts;
void Try(int i){
    if(i==n+1){
        if(ktr()){
            res++;
            string S="";
            for(int i=1;i<=n;i++) S += mc[i];
            vts.push_back(S);
        }
        return;
    }
    for(char j = 'A'; j<='B'; j++){
        mc[i] = j;
        Try(i+1);
    }
}

void solution(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) mc[i] = 'A';
    Try(1);
    cout<<res<<endl;
    for(string it:vts) cout<<it<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}