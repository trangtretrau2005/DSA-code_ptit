#include <bits/stdc++.h>

using namespace std;

int n, k, cnt, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;
pair<int,int> direction[2] = {{1,0}, {0,1}};
vector<string> res;

// cach 1
// void Try(int i){
//     for(int j=tmpv[i-1] + 1; j<=n; j++){
//         tmpv[i] = j;
//         if(m[tmpv[i-1]] < m[tmpv[i]]){
//             if(i>1){
//                 string S = "";
//                 for(int u = 1; u <= i; u++) S += to_string(m[tmpv[u]]) + " ";
//                 res.push_back(S);
//             }
//             Try(i+1);
//         }
//     }
// }

// cach 2
void Try(int i, int st){
    for(int j=st; j<=n; j++){
        mang[i] = m[j];
        if(mang[i] > mang[i-1]){
            if(i>1){
                string S = "";
                for(int u = 1; u <= i; u++) S += to_string(mang[u]) + " ";
                res.push_back(S);
            }
            Try(i+1, j+1);
        }
    }
}

void solution(){
    cin>>n;
    for(int i=1; i<=n ;i++) cin>>m[i];
    Try(1,1);
    sort(res.begin(), res.end());
    for(string it:res) cout<<it<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
}