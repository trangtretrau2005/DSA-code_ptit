#include <bits/stdc++.h>

using namespace std;

void solution(){
    int k;
    cin>>k;
    cin.ignore();
    string s;
    cin>>s;
    map<char, int> mpc;
    for(char it:s) mpc[it]++;
    long long sum = 0;
    priority_queue<int> q;
    for(auto it:mpc) q.push(it.second);
    while(!q.empty() && k>0){
        int tmp = q.top();
        q.pop();
        tmp--;
        k--;
        q.push(tmp);
    }
    while(!q.empty()){
        int tmp = q.top();
        sum += 1LL*tmp*tmp;
        q.pop();
    }
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