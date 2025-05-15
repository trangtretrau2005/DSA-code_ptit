#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

void solution(){
    int n;
    cin>>n;
    vector<pair<int,int>> vtp;
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        vtp.push_back(make_pair(x,y));
    }
    sort(vtp.begin(), vtp.end(), cmp);
    int tmp = vtp[0].second;
    int cnt = 1;
    for(int i=1; i<n; i++){
        if(vtp[i].first >= tmp){
            tmp = vtp[i].second;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}