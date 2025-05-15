#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 1000000007

void solution(){
    string s;
    cin>>s;
    stack<int> st;
    int res;
    for(int i=0; i<int(s.length());i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            if(s[i] == '+') res = a + b;
            else if(s[i] == '-') res = a - b;
            else if(s[i] == '*') res = a * b;
            else res = a/b;
            st.push(res);
        }
        else{
            string tmp = "";
            tmp += s[i];
            st.push(stoi(tmp));
        }
    }
    cout<<st.top()<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}