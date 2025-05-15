#include <bits/stdc++.h>

using namespace std;

int n, k, cnt=0, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;                 // D,   L,      R          U
pair<int,int> direction[4] = {{1,0}, {0,-1}, {0,1}, {-1,0}};

void solution(){
    cin>>k;
    string s;
    cin>>s;
    string S = s; sort(S.begin(), S.end());
    for(int i=0; i<int(s.length()); i++){
        if(s[i] < S.back() && k>0){
            k--;
            int j=i+1;
            while(s[j] != S.back() && j<int(s.length())) j++;
            swap(s[i],s[j]);
        }
        if(S!="") S.pop_back();
    }
    cout<<s<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}