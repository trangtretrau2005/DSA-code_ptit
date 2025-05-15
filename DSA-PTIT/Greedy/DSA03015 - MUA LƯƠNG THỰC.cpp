#include <bits/stdc++.h>

using namespace std;

// N : số đơn vị lương thực nhiều nhất bạn có thể mua trong ngày.
// S : số lượng ngày bạn cần được sử dụng lương thực để tồn tại.
// M : số đơn vị lương thực cần có mỗi ngày để bạn tồn tại.
void solution(){
    int n,s,m;
    cin>>n>>s>>m;
    if(m > n){
        cout<<-1<<endl;
        return;
    }
    int tmp;
    if(s*m % n == 0) tmp = s*m/n;
    else tmp = s*m/n + 1;
    int res = tmp;
    if(tmp/7 > 0) res += tmp/7;
    if(res > s) cout<<-1<<endl;
    else cout<<tmp<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}