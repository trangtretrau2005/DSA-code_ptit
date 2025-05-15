#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
	int a[n+1];
    bool check[1000]={false};
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        check[a[i]]=true;
    }
    for(int t:a) {
    	if(check[t]) {
		cout<<t<<" ";
		check[t]=false;
			}
		}
}

