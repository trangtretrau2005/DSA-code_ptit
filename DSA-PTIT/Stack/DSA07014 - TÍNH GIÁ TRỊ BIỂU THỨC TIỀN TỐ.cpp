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
    stack<int> ss;
    int res;
    for(int i=int(s.length())-1; i>=0; i--){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            int a = ss.top();
            ss.pop();
            int b = ss.top();
            ss.pop();
            if(s[i] == '+') res = a + b;
            else if(s[i] == '-') res = a - b;
            else if(s[i] == '*') res = a*b;
            else res = a/b;
            ss.push(res);
        }
        else{
            ss.push(s[i] - '0');
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