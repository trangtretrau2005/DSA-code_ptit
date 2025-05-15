#include <bits/stdc++.h>

using namespace std;

long long n, k, m[1000001], tmpv[100001];
#define mod 1000000007


// *+AB-CD
// dung ngan xep -> duyet cuoi ve vi du D C gap dau '-' -> (C - D) tiep tuc ... ((A+B)*(C-D))
// *-A/BC-/AKL
// ((A-(B/C))*((A/K)-L))
// ((A-(B/C))*((A/K)-L))
void solution(){
    string s;
    cin>>s;
    stack<string> ss;
    for(int i=int(s.length())-1; i>=0; i--){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            string b = ss.top();
            ss.pop();
            string a = ss.top();
            ss.pop();
            string res = "(" + b + s[i] + a + ")";
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