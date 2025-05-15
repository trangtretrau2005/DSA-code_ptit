#include <bits/stdc++.h>

using namespace std;

void solution(){
    string s;
    cin>>s;
    map<char,int> mpc;
    for(char it:s){
        mpc[it]++;
    }
    priority_queue<int> q;
    for(auto it:mpc){
        q.push(it.second);
    }
    int tmp;
    while(q.size()>1){
        tmp = q.top();
        q.pop();
        tmp -= q.top();
        if(tmp > 0){
            q.pop();
            q.push(tmp);
        }
        else if(tmp == 0){
            q.pop();
            q.push(1);
        }
    }
    if(q.top()==1) cout<<1<<endl;
    else if(q.top()>1) cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}