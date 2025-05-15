#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;
    long long sum = 0;
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        q.push(tmp);
    }
    while(q.size()>1){
        int tmp = q.top();
        q.pop();
        tmp += q.top();
        q.pop();
        q.push(tmp);
        sum += tmp;
    }
    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}
#include <bits/stdc++.h>

// using namespace std;

// void solution(){
//     int n;
//     cin>>n;
//     multiset<int> st;
//     for(int i=1; i<=n; i++){
//         int tmp; cin>>tmp;
//         st.insert(tmp);
//     }
//     long long sum = 0;
//     while(st.size()>1){
//         set<int>::iterator it = st.begin();
//         int tmp = *it;
//         st.erase(it);
//         set<int>::iterator itt = st.begin();
//         tmp += *itt;
//         st.erase(itt);
//         st.insert(tmp);
//         sum+=tmp;
//     }
//     cout<<sum<<endl;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solution();
//     }
// }