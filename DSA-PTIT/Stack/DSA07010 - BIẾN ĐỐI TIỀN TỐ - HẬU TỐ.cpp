#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 1000000007

void solution(){
    string s;
    cin>>s;
    stack<string> ss;
    for(int i = int(s.length())-1; i>=0; i--){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            string res = "";
            string a = ss.top(); ss.pop();
            string b = ss.top(); ss.pop();
            res = a + b + s[i];
            ss.push(res);
        }
        else{
            string tmp = "";
            tmp += s[i];
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