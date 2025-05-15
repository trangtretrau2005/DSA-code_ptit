#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<string> vts = {"6", "8"};
    queue<string> q;
    q.push("6"); q.push("8");
    while(int(q.front().length()) < n){
        string tmp = q.front();
        q.push(tmp + "6"); q.push(tmp + "8");
        vts.push_back(tmp + "6"); vts.push_back(tmp + "8");
        q.pop();
    }
    for(vector<string>::reverse_iterator it = vts.rbegin(); it!=vts.rend(); it++) cout<<*it<<" ";
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