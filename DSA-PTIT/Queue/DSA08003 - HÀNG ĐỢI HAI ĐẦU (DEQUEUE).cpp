#include <bits/stdc++.h>

using namespace std;

// Yêu cầu bạn xây dựng một hàng đợi hai đầu với các truy vấn sau đây:

// “PUSHFRONT x”: Thêm phần tử x vào đầu của dequeue (0 ≤ x ≤ 1000).

// “PRINTFRONT”: In ra phần tử đầu tiên của dequeue. Nếu dequeue rỗng, in ra “NONE”.

// “POPFRONT”: Xóa phần tử đầu của dequeue. Nếu dequeue rỗng, không làm gì cả.

// “PUSHBACK x”: Thêm phần tử x vào cuối của dequeue (0 ≤ x ≤ 1000).

// “PRINTBACK”: In ra phần tử cuối của dequeue. Nếu dequeue rỗng, in ra “NONE”.

// “POPBACK”: Xóa phần tử cuối của dequeue. Nếu dequeue rỗng, không làm gì cả.

void solution(){
    deque<int> q;
    int t; cin>>t; cin.ignore();
    while(t--){
        string s;
        cin>>s;
        if(s == "PUSHFRONT"){
            int x;
            cin>>x;
            cin.ignore();
            q.push_front(x);
        }
        else if(s == "PUSHBACK"){
            int x;
            cin>>x;
            cin.ignore();
            q.push_back(x);
        }
        else if(s == "PRINTFRONT"){
            if(!q.empty()){
                cout<<q.front()<<endl;
            }
            else cout<<"NONE\n";
        }
        else if(s == "PRINTBACK"){
            if(!q.empty()){
                cout<<q.back()<<endl;
            }
            else cout<<"NONE\n";
        }
        else if(s == "POPFRONT"){
            if(!q.empty()) q.pop_front();
        }
        else{
            if(!q.empty()) q.pop_back();
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