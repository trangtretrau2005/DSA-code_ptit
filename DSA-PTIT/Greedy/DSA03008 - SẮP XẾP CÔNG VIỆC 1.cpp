#include <bits/stdc++.h>

using namespace std;

int n, m[1000001];

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

void solution(){
    cin>>n;
    pair<int,int> p[n];
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        p[i].first = tmp; 
    } 
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        p[i].second = tmp;
    }

    sort(p, p+n, cmp);
    int cnt=1, end_curr = p[0].second;
    for(int i=1;i<n;i++){
        if(p[i].first >= end_curr ){
            // cout<<p[i].first <<" "<< p[i-1].second<<endl;
            cnt++;
            end_curr = p[i].second;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}