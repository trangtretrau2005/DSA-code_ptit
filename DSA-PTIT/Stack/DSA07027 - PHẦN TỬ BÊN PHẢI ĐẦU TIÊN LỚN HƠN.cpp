#include <bits/stdc++.h>

using namespace std;

int n, k, m[1000001], tmpv[1000001];
#define mod 1000000007

void solution(){
    stack<int> svt;
    cin>>n;
    for(int i=0; i<n; i++) cin>>m[i];
    for(int i=0; i<n; i++){
        if(svt.empty()) svt.push(i);
        else{
            while(!svt.empty() && m[svt.top()] < m[i]){
                tmpv[svt.top()] = m[i];
                svt.pop();
            }
            svt.push(i);
        }
    }
    while(!svt.empty()){
        tmpv[svt.top()] = -1;
        svt.pop();
    }
    for(int i=0; i<n; i++) cout<<tmpv[i]<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}