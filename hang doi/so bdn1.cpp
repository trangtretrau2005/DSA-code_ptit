#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<string> v;
        queue<string> q;
        q.push("1");
        ll cnt = 1;
        while(!q.empty()){
            string x = q.front();
            q.pop();
            string num1 = x + "0";
            string num2 = x + "1";
            if(stoll(num1) > n) break;
            else{
                q.push(num1);
                ++cnt;
            }
            if(stoll(num2) <= n){
                q.push(num2);
                ++cnt;
            }
            
        }
        cout << cnt<< "\n";
    }
    return 0;
}
