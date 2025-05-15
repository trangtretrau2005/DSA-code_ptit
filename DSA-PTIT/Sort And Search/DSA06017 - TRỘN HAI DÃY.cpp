#include <bits/stdc++.h>

using namespace std;

int n, m, a[100001], b[100001];

vector<int> res;
void merge(){
    sort(a,a+n);
    sort(b,b+m);

    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]) res.push_back(a[i++]);
        else res.push_back(b[j++]);
    }

    while(i<n) res.push_back(a[i++]);
    while(j<m) res.push_back(b[j++]);
}

void solution(){
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    merge();
    for(int it:res) cout<<it<<" ";
    cout<<endl;
    res.clear();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}