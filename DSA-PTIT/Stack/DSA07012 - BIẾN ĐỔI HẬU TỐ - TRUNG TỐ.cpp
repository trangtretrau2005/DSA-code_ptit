#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007

void solution(){
    string s;
    stack<string> sc;
    getline(cin,s);
    for(char c:s){
        if(c == '+' || c == '-' || c == '*' || c == '/'){
            string b = sc.top(); sc.pop();
            string a = sc.top(); sc.pop();
            string res = "(" + a + c + b + ")";
            sc.push(res);
        }
        else{
            string tmp = ""; tmp += c;
            sc.push(tmp);
        }
    }
    cout<<sc.top()<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}