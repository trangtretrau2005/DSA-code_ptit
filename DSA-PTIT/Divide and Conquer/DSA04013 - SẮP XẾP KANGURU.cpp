#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<int> vt(n);
    for(int &i:vt){
        cin>>i;
    }
    sort(vt.begin(), vt.end());
    int res = n;
    int i=0, j=n/2;
    while(i<n/2 && j<n){
        if(2*vt[i] <= vt[j]){
            res--;
            i++;
        }
        j++;
    }
    cout<<res<<endl;
}

int main(){
    int t;
    cin>>t; 
    while(t--){
        solution();
    }
}