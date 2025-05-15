#include <bits/stdc++.h>

using namespace std;

int n;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

void solution(){
    cin>>n;
    vector<pair<int,int>> vtp;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        mp[tmp]++;
    }
    for(auto it:mp) vtp.push_back(make_pair(it.first, it.second));
    sort(vtp.begin(), vtp.end(), cmp);

    for(auto it:vtp){
        for(int i=0;i<it.second;i++) cout<<it.first<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}