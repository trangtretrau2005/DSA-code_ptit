#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007

// 1Trả về kích thước của queue
// 2Kiểm tra xem queue có rỗng không, nếu có in ra “YES”, nếu không in ra “NO”.
// 3Cho một số nguyên và đẩy số nguyên này vào cuối queue.
// 4Loại bỏ phần tử ở đầu queue nếu queue không rỗng, nếu rỗng không cần thực hiện.
// 5Trả về phần tử ở đầu queue, nếu queue rỗng in ra -1.
// 6Trả về phần tử ở cuối queue, nếu queue rỗng in ra -1.

void solution(){
    deque<int> q;
    int t;
    cin>>t;
    while(t--){
        int key;
        cin>>key;
        if(key == 1) cout<<q.size()<<endl;
        else if(key == 2){
            if(q.empty()) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(key == 3){
            int val;
            cin>>val;
            q.push_back(val);
        }
        else if(key == 4){
            if(!q.empty()) q.pop_front();
        }
        else if(key == 5){
            if(!q.empty()){
                cout<<q.front()<<endl;
            }
            else cout<<-1<<endl;
        }
        else{
            if(!q.empty()){
                cout<<q.back()<<endl;
            }
            else cout<<-1<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}