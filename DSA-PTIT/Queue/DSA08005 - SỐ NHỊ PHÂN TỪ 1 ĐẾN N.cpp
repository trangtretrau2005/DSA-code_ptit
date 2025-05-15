#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;
    queue<string> qs;
    string s="1";
    qs.push(s);
    while(n--){
        string tmp1 = qs.front() + "0", tmp2 = qs.front() + "1";
        qs.push(tmp1); qs.push(tmp2);
        cout<<qs.front()<<" ";
        qs.pop();
    }
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