#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;
    pair<int,pair<int,int>> res; res.first = 0; res.second.first = 0; res.second.second = INT_MAX;
    // <so4, so7, tong so chu so>
    pair<int,pair<int,int>> tmp;
    bool check = false;
    for(int i=0; i<=n/7; i++){
        if((n-7*i)%4==0){
            tmp.first = (n-7*i)/4; tmp.second.first = i; tmp.second.second = i+tmp.first;
            if(res.second.second > tmp.second.second) {res = tmp; check = true;}
            else if(res.second.second == tmp.second.second){
                if(tmp.first < res.first) res = tmp;
            }
        }
    }
    if(!check) cout<<-1<<endl;
    else{
        for(int i=0; i<res.first; i++) cout<<4;
        for(int i=0; i<res.second.first; i++) cout<<7;
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
    return 0;
}
