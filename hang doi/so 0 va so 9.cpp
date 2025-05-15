#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<string> q;
        q.push("9");
        ll res = 0;
        while(!q.empty()){
            string top = q.front();
            q.pop();
            res = stoll(top);
            if(res % n == 0) break;
            string num1 = top + '0';
            string num2 = top + '9';
            q.push(num1);
            q.push(num2);
        }
        cout << res << "\n";
    }

    return 0;
}
