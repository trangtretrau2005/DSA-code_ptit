#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007

void solution(){
    string res = "";
    string a;
    getline(cin,a);
    stack<char> sc;
    map<char, int> p = {{'+',1}, {'-',1}, {'*',2}, {'/',2}, {'(', 0}, {'^', 3}};

    for(int i=0; i<int(a.length()); i++){
        if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z') res += a[i];
        else if(a[i] == '(') sc.push(a[i]);
        else if(a[i] == ')'){
            while(!sc.empty() && sc.top() != '('){
                res += sc.top();
                sc.pop();
            }
            sc.pop();
        }
        else if(p.count(a[i])){                   // kiem tra xem dau trong stack co lon hon dau hien tai khong
            while(!sc.empty() && p[sc.top()] >= p[a[i]]){
                res += sc.top();
                sc.pop();
            }
            sc.push(a[i]);
        }
    }
    while(!sc.empty()){
        res += sc.top();
        sc.pop();
    }
    cout<<res<<endl;

    // cach viet 2 
    // stack<pair<char, int>> svk;

    // for(int i=0; i<int(a.length()); i++){
    //     if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z') res += a[i];
    //     else if(a[i] == '(') svk.push(make_pair(a[i], 0));
    //     else if(a[i] == ')'){
    //         while(!svk.empty() && svk.top().first != '('){
    //             res += svk.top().first;
    //             svk.pop();
    //         }
    //         svk.pop();
    //     }
    //     else{
    //         int val;
    //         if(a[i] == '+' || a[i] == '-') val = 1;
    //         else if(a[i] == '*' || a[i] == '/') val = 2;
    //         else if(a[i] == '^') val = 3;

    //         while(!svk.empty() && svk.top().second >= val){
    //             res += svk.top().first;
    //             svk.pop();
    //         }

    //         svk.push(make_pair(a[i], val));
    //     }
    // }
    
    // while(!svk.empty()){
    //     res += svk.top().first;
    //     svk.pop();
    // }
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}