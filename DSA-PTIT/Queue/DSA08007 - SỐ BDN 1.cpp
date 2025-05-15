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
        long long n;
        cin>>n;
        vector<long long>::iterator it = res.begin();
        it = lower_bound(res.begin(), res.end(), n);
        
        if(*it == n) cout<<(it - res.begin()) + 1<<endl;
        else cout<<(it - res.begin())<<endl;
    }
}