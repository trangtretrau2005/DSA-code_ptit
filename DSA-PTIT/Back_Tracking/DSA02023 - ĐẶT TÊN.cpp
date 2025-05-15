#include <bits/stdc++.h>

using namespace std;

int n, k, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001];

vector<string> vts;
void Try(int i){
    if(i==k+1){
        for(int i=1; i<=k; i++) cout<<vts[tmpv[i]-1]<<" "; // tmpv[i] - 1 là do vector lưu chỉ số từ 0->n-1 còn tmpv[] lưu 1->n
        cout<<endl;
        return;
    }
    for(int j=tmpv[i-1] + 1; j<=n; j++){
        tmpv[i] = j;
        Try(i+1);
    }
}

void solution(){
    vts.clear();
    cin>>n>>k;
    cin.ignore();
    set<string> st;
    while(n--){
        string S;
        cin>>S;
        st.insert(S);
    }
    for(string it:st) vts.push_back(it);
    n=vts.size();
    Try(1);
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}