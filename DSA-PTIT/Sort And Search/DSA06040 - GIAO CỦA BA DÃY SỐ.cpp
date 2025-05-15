#include <bits/stdc++.h>

using namespace std;

int n1, n2, n3;

void solution(){
    cin>>n1>>n2>>n3;
    bool check = false;
    vector<long long> a(n1),b(n2),c(n3);
    for(long long &it:a) cin>>it;
    for(long long &it:b) cin>>it;
    for(long long &it:c) cin>>it;
    int i=0,j=0,k=0;
    vector<long long> res;
    while(i<n1 && j<n2 && k<n3){
        if(a[i] == b[j] && a[i] == c[k]){
            res.push_back(a[i]);
            i++; j++; k++;
            check = true;
        }
        else if(a[i] > b[j]) j++;
        else if(b[j] > c[k]) k++;
        else i++;
    }
    for(auto it:res) cout<<it<<" ";
    if(!check) cout<<"-1";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}