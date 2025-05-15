#include <bits/stdc++.h>

using namespace std;

vector<long long> res;
void solution(){
    queue<long long> q;
    long long tmp = 1;
    q.push(tmp);
    res.push_back(1);
    while(tmp <= LONG_LONG_MAX/10){
        tmp = q.front(); 
        q.pop();
        tmp *= 10;
        q.push(tmp); q.push(tmp + 1);
        res.push_back(tmp);
        res.push_back(tmp+1);
    }
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    solution();
    while(t--){
        int n;
        cin>>n;
        for(auto it:res){
            long long tmp = it/n;
            if(tmp * n == it){
                cout<<it<<endl;
                break;
            }
        }
    }
}