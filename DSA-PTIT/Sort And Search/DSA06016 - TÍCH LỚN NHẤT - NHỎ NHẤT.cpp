#include <bits/stdc++.h>

using namespace std;

int n, m;

void solution(){
    cin>>n>>m;
    int tmp, max1=INT_MIN, min1=INT_MAX;
    while(n--){
        cin>>tmp;
        if(tmp > max1) max1 = tmp; 
    }
    while(m--){
        cin>>tmp;
        if(tmp < min1) min1 = tmp;
    }

    cout<<1LL*max1*min1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}