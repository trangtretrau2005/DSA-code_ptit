#include <bits/stdc++.h>

using namespace std;

pair<int, int> p[8] = {{2, -1}, {2, 1}, {1, -2}, {1, 2}, {-1, 2}, {-1, -2}, {-2, -1}, {-2, 1}};

int main() {
    int t;
    cin >> t;
    while (t--) {
        char x, y;
        int x1, y1;
        cin >> x >> x1;
        cin >> y >> y1;

        int mark[9][9] = {0};
        x -= 'a' - 1;
        y -= 'a' - 1;
        
        queue<pair<pair<int, int>, int>> q;
        q.push({{x, x1}, 0});
        mark[x][x1] = 1;

        if (x == y && x1 == y1) {
            cout << 0 << endl;
            continue;
        }

        while (!q.empty()) {
            auto tmp = q.front();
            q.pop();
            int curX = tmp.first.first;
            int curY = tmp.first.second;
            int steps = tmp.second;

            for (int i = 0; i < 8; i++) {
                int i1 = curX + p[i].first, j1 = curY + p[i].second;
                if (i1 >= 1 && i1 <= 8 && j1 >= 1 && j1 <= 8 && mark[i1][j1] == 0) {
                    if (i1 == y && j1 == y1) {
                        cout << steps + 1 << endl;
                        goto end_case;
                    }
                    mark[i1][j1] = 1;
                    q.push({{i1, j1}, steps + 1});
                }
            }
        }
    end_case:;
    }
    return 0;
}

// cach viet 2
#include <bits/stdc++.h>

// using namespace std;

// pair<int,int> p[8] = {{2,-1}, {2,1}, {1,-2}, {1,2}, {-1,2}, {-1,-2}, {-2,-1}, {-2,1}};

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         char l,m;
//         int x1,y1,x,y;
//         cin>>l>>x1;
//         cin>>m>>y1;
//         int mark[9][9];
//         for(int i=1;i<=8;i++) for(int j=1; j<=8; j++) mark[i][j]=0;
//         x=l-96; y=m-96;
        
//         mark[x][x1] = 1;

//         queue<pair<pair<int,int>,int>> q;
//         q.push({{x,x1},0});
        
//         if(x==y && x1==y1){
//             cout<<0<<endl;
//         }
//         else{
//             int ok=0;
//             while(!q.empty()){
//                 pair<pair<int,int>,int> tmp = q.front();
//                 q.pop();
//                 for(int i=0; i<8; i++){
//                     int i1 = tmp.first.first + p[i].first , j1 = tmp.first.second + p[i].second;
//                     if(i1==y && j1==y1){ cout<<tmp.second+1<<endl; ok = 1; break;}
//                     else if(mark[i1][j1]==0 && i1>=1 && i1<=8 && j1>=1 && j1<=8){
//                         mark[i1][j1] = 1;
//                         q.push({{i1,j1},tmp.second+1});
//                     }
//                 }
//                 if(ok) break;
//             }
//         }
//     }
// }