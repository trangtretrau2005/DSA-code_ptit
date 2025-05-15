#include <bits/stdc++.h>

using namespace std;

int n, s, cnt=0, m[100001], mark[100001];

vector<string> vts;
void in(int i){
    string S="";
    for(int j=1;j<=i;j++) S += to_string(mark[j]) + " ";
    vts.push_back(S);
}

void ql(int i, int sum, int st){
    if(sum==s){
        cnt++;
        in(i-1);
        return;
    }
    for(int j=st;j<=n;j++){
        if(sum + m[j] <= s){
            mark[i] = m[j];
            ql(i+1, sum + m[j], j+1);
        }
    }
}

void solution(){
    cin>>n>>s;
    for(int i=1;i<=n;i++) cin>>m[i];
    ql(1,0,1);
    for(int i=int(vts.size())-1;i>=0;i--) cout<<vts[i]<<endl;
    cout<<cnt<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}