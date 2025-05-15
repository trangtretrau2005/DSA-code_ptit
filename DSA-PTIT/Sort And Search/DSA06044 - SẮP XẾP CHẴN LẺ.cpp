#include <bits/stdc++.h>

using namespace std;

int n, m[100001];

bool cmp(int a, int b){
    return a>b;
}

void solution(){
    cin >> n;
    vector<int> chan;
    vector<int> le;
    for(int i=0;i<n;i++){
        cin>>m[i];
        if(i%2) chan.push_back(m[i]);
        else le.push_back(m[i]);
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), cmp);

    int i1=0,j1=0;
    for(int i=0;i<n;i++){
        if(i%2==0) cout<<le[i1++]<<" ";
        else cout<<chan[j1++]<<" ";
    }
    cout<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}