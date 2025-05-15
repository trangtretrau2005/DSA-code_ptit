#include <bits/stdc++.h>

using namespace std;

// Yêu cầu bạn xây dựng một queue với các truy vấn sau đây:

// “PUSH x”: Thêm phần tử x vào cuối của queue (0 ≤ x ≤ 1000).

// “PRINTFRONT”: In ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.

// “POP”: Xóa phần tử ở đầu của queue. Nếu queue rỗng, không làm gì cả.

void solution(){
    queue<int> q;
    int t; cin>>t; cin.ignore();
    while(t--){
        string s;
        cin>>s;
        if(s == "PUSH"){
            int x;
            cin>>x;
            cin.ignore();
            q.push(x);
        }
        else if(s == "PRINTFRONT"){
            if(!q.empty()){
                cout<<q.front()<<endl;
            }
            else cout<<"NONE\n";
        }
        else{
            if(!q.empty()) q.pop();
        }
    }
}

int main(){
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
        solution();
    // }
}