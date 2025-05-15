#include <bits/stdc++.h>

using namespace std;

int n, m[100001];

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

void solution(){
    vector<pair<int,int>> vtp;
    map<int,int> mp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m[i];
        mp[m[i]]++;
    }
    for(auto it:mp){
        vtp.push_back(make_pair(it.first, it.second));
    }

    sort(vtp.begin(), vtp.end(), cmp);
    if(vtp[0].second > n/2) cout<<vtp[0].first<<endl;
    else cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}