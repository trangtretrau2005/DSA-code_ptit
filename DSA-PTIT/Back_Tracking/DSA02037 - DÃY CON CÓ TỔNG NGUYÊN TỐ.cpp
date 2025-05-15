#include <bits/stdc++.h>

using namespace std;

int n, k, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;

set<string> st;

bool check_snt(int X){
    if(X<=1) return false;
    for(int i=2;i<=sqrt(X);i++) if(X%i==0) return false;
    return true;
}

void sang(){
    for(int i=0;i<=500;i++){
        if(mang[i] == 0 && check_snt(i)){
            for(int j=i*i; j<=5000;j+=i) mang[j] = 1;
        }
        else mang[i] = 1;
    }
}

void Try(int i, int sum){
    if(!mang[sum]){
        string s="";
        for(int j=1;j<=i-1;j++) s += to_string(m[tmpv[j]]) + " ";
        st.insert(s);
    }
    for(int j=tmpv[i-1]+1; j<=n; j++){
        tmpv[i] = j;
        Try(i+1, sum+m[j]);
    }
}

void solution(){
    st.clear();
    cin>>n;
    for(int i=1;i<=n;i++) cin>>m[i];
    sort(m+1, m+1+n, greater<int>());
    Try(1,0);
    for(string it:st) cout<<it<<endl;
}

int main(){
    int t;
    cin>>t;
    sang();
    while(t--){
        solution();
    }
}