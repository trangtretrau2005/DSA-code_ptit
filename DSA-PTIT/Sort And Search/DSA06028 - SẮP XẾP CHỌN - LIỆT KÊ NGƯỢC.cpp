#include <bits/stdc++.h>

using namespace std;

int n, m[1000];

void in(){
    for(int i=0;i<n;i++) cout<<m[i]<<" ";
    cout<<endl;
}


void solution(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];
    vector<string> vts;
    vector<int> tmp(m,m+n);
    sort(tmp.begin(), tmp.end());
    int cnt=1;
    for(int i=0;i<n;i++){
        // bool check = false;
        // if(m[i] == tmp[i]) continue;
        for(int j=i+1;j<n;j++){
            if(tmp[i] == m[j]) {
                swap(m[i], m[j]);
                // check=true;
                break;
            }
        }
        if(i<n-1){
            string res="Buoc "+to_string(cnt++)+": ";
            for(int i=0; i<n;i++) res += to_string(m[i]) + " ";
            vts.push_back(res);
        }
    }
    for(int i=vts.size();i>=0;i--) cout<<vts[i]<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}