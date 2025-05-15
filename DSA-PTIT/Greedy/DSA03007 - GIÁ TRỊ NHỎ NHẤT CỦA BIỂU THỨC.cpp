#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int &it:a) cin>>it;
    for(int &it:b) cin>>it;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    long long sum = 0;
    for(int i=0; i<n; i++) sum += a[i]*b[i];
    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}