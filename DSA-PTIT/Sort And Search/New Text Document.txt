#include <bits/stdc++.h>

using namespace std;

int m[1000001];

// cach 1
// void solution(){
//     int n, k;
//     cin>>n>>k;
//     for(int i=0; i<n; i++) cin>>m[i];

//     for(int i=0; i<n-k+1; i++){
//         int tmp = -INT_MAX;
//         for(int j=i; j<i+k; j++) tmp = max(tmp, m[j]);
//         cout<<tmp<<" ";
//     }
//     cout<<endl;
// }

// cach 2
// void solution(){
//     int n, k;
//     cin>>n>>k;
//     multiset<int> mts;
//     for(int i=0; i<n; i++) cin>>m[i];
    
//     for(int i=0; i<k; i++) mts.insert(m[i]);
//     multiset<int>::reverse_iterator it = mts.rbegin();
//     cout<<*it<<" ";

//     for(int i=k; i<n; i++){
//         mts.insert(m[i]);
//         mts.erase(mts.find(m[i-k]));
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }

// cach 3
void solution(){
    int n, k;
    cin>>n>>k;
    deque<int> dq;
    for(int i=0; i<n; i++) cin>>m[i];
    
    for(int i=0; i<k; i++){
        while(!dq.empty() && m[dq.back()] <= m[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<m[dq.front()]<<" ";

    for(int i=k; i<n; i++){
        // xoa vi tri ko hop le
        if(dq.front() <= i-k) dq.pop_front();

        // day vi tri vao
        while(!dq.empty() && m[dq.back()] <= m[i]){
            dq.pop_back();
        }
        dq.push_back(i);

        cout<<m[dq.front()]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solution();
    }
}