#include bitsstdc++.h

using namespace std;

int n, k, cnt, m[100001], tmpv[100001], lk[100001], tmp[100001], mang[100001], m2c[1001][1001];
bool check;
pairint,int direction[2] = {{1,0}, {0,1}};

char mc[10001], mangc[10001];

void in(){
    for(int i=1; i=n; i++) coutmang[i];
    coutendl;
}

bool ktr(){
    for(int i=2;i=n;i++){
        if(abs(mang[i]-mang[i-1]) == 1) return false;
    }
    return true;
}

void Try(int i){
    if(i==n+1){
        if(ktr()) 
        in();
        return;
    }
    for(int j=1; j=n; j++){
        if(!lk[j]){
            lk[j] = 1;
            mang[i] = m[j];

            Try(i+1);

            lk[j] = 0;
        }
    }
}

void solution(){
    cinn;
    for(int i=1; i=n; i++) m[i] = i;
    Try(1);
}

int main(){
    int t;
    cint;
    while(t--){
        solution();
    }
}