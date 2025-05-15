#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 1000000007

void solution(){
    stack<string> ss;
    vector<string> vss;
    string s;
    getline(cin, s);
    stringstream sss(s);
    while(sss>>s){
        ss.push(s);
        vss.push_back(s);
    }
    // while(!ss.empty()){
    //     cout<<ss.top()<<" ";
    //     ss.pop();
    // }
    reverse(vss.begin(), vss.end());
    for(auto it:vss) cout<<it<<" ";
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