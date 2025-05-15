#include <bits/stdc++.h>

using namespace std;

bool ktr(string s, int n){
    int du = 0;
    for(char c:s){
        du = du*10 + (c - '0');
        du %= n;
    }
    return du == 0;
}

void solution(){
    int n;
    cin>>n;
    queue<string> qs;
    string s="9";
    qs.push(s);
    while(true){
        string tmp1 = qs.front() + "0", tmp2 = qs.front() + "9";
        qs.push(tmp1); qs.push(tmp2);
        if(ktr(qs.front(), n)){
            cout<<qs.front()<<endl;
            return;
        }
        qs.pop();
    }
    // cout<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}