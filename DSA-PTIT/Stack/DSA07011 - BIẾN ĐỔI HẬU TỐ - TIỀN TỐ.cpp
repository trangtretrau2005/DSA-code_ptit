#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007

void solution(){
    string s;
    getline(cin,s);
    stack<string>ss;
    for(char c:s){
        if(c == '+' || c == '-' || c == '*' || c == '/'){
            string a = ss.top(); ss.pop();
            string b = ss.top(); ss.pop();
            string res = c + b + a;
            ss.push(res);
        }
        else{
            string tmp = ""; tmp += c;
            ss.push(tmp);
        }
    }
    cout<<ss.top()<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}