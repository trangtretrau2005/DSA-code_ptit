#include <bits/stdc++.h>

using namespace std;

int n, k, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;

set<string> st;
void Try(int i, int sum){
    if(sum%2){
        string s="";
        for(int j=1;j<=i-1;j++){
            s += to_string(m[tmpv[j]]) + " ";
        }
        st.insert(s);
    }
    for(int j=tmpv[i-1]+1; j<=n; j++){
        // if((m[j] + sum)%2){
            tmpv[i] = j;
            Try(i+1, sum+m[j]);
        // }
    }
}

void solution(){
    cin>>n; st.clear();
    for(int i=1;i<=n;i++) cin>>m[i];
    sort(m+1, m+1+n, greater<int>());
    Try(1,0);
    for(string it:st) cout<<it<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}