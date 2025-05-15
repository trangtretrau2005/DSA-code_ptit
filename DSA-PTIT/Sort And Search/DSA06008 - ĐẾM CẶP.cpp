#include <bits/stdc++.h>

using namespace std;
// từ test chô thấy các th đặc biệt
// x=0 -> ko có;
// x=1 -> y=0;
// x=2 -> y=0,1 và y>=5;
// x=3 -> y!=3
// x>4 -> y=0,1 và y>x 

int n,m,x[100001], y[100001], special[5];

int res(int X){
    int r = special[0] + special[1];
    if(X==0) return 0;
    else if(X==1) return special[0];
    else if(X==2){
        int *it = lower_bound(y, y+m, 5); // di tim vi tri dau tien >=5
        r += (m-1) - (it-y) + 1;
    }
    else if(X==3){
        r += special[2];
        int *it = lower_bound(y, y+m, 4); // di tim vi tri dau tien >=4
        r += (m-1) - (it-y) + 1;
    }
    else{
        int *it = lower_bound(y, y+m, X+1); // di tim vi tri dau tien >=5
        r += (m-1) - (it-y) + 1;
    }
    return r;
}

void solution(){
    memset(special,0,sizeof(special));
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>x[i]; 
    for(int i=0;i<m;i++){
        cin>>y[i];
        if(y[i]<5) special[y[i]]++;
    }

    sort(y,y+m);
    // duyệt các phần tử x[i];
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt += res(x[i]);
    }
    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}
//x y
// 7 7
//i j -> i^j | j^i
// 0 0 1 1
// 0 1 0 1
// 0 2 0 1
// 0 3 0 1
// 0 4 0 1
// 0 5 0 1
// 0 6 0 1
// 0 7 0 1
// 1 0 1 0
// 1 1 1 1
// 1 2 1 2
// 1 3 1 3
// 1 4 1 4
// 1 5 1 5
// 1 6 1 6
// 1 7 1 7
// 2 0 1 0
// 2 1 2 1
// 2 2 4 4
// 2 3 8 9
// 2 4 16 16
// 2 5 32 25
// 2 6 64 36
// 2 7 128 49
// 3 0 1 0
// 3 1 3 1
// 3 2 9 8
// 3 3 27 27
// 3 4 81 64
// 3 5 243 125
// 3 6 729 216
// 3 7 2187 343
// 4 0 1 0
// 4 1 4 1
// 4 2 16 16
// 4 3 64 81
// 4 4 256 256
// 4 5 1024 625
// 4 6 4096 1296
// 4 7 16384 2401
// 5 0 1 0
// 5 1 5 1
// 5 2 25 32
// 5 3 125 243
// 5 4 625 1024
// 5 5 3125 3125
// 5 6 15625 7776
// 5 7 78125 16807
// 6 0 1 0
// 6 1 6 1
// 6 2 36 64
// 6 3 216 729
// 6 4 1296 4096
// 6 5 7776 15625
// 6 6 46656 46656
// 6 7 279936 117649
// 7 0 1 0
// 7 1 7 1
// 7 2 49 128
// 7 3 343 2187
// 7 4 2401 16384
// 7 5 16807 78125
// 7 6 117649 279936
// 7 7 823543 823543