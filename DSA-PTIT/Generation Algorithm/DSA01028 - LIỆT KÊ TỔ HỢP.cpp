#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

void in(){
    for(int i=1;i<=k;i++) cout<<m[tmpv[i]]<<" ";
    cout<<endl;
}

void Try(int i){
    if(i==k+1){
        in();
        return;
    }
    for(int j=tmpv[i-1] + 1; j<=n; j++){
        tmpv[i] = j;
        Try(i+1);
    }
}

void solution(){
    set<int> st;
    cin>>n>>k;
    while(n--){
        int X;
        cin>>X;
        st.insert(X);
    }
    int stt=1;
    n=st.size();
    for(auto it:st){
        m[stt++] = it;
    }
    Try(1);
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}