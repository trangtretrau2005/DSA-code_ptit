#include <bits/stdc++.h>

using namespace std;

long long BASE = 1e9+7;
void solution(){
    int n;
    cin>>n;
    long long sum = 0;
    priority_queue<long long, vector<long long>, greater<long long>> q;
    for(int i=0; i<n; i++){
        long long tmp;
        cin>>tmp;
        q.push(tmp);
    }
    while(q.size()>1){
        long long tmp = q.top();
        q.pop();
        tmp += q.top();
        q.pop();

        tmp%=BASE;
        q.push(tmp);
        sum += tmp;
        sum %= BASE;
    }
    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}