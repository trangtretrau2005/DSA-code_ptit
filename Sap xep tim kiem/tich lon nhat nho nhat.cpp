#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int m, n; cin >> m >> n;
		long long x;
		set<long long> S,X;
		while (m--) {
			cin >> x; S.insert(x);
		}
		while (n--) {
			cin >> x; X.insert(x);
		}
		long long res = *S.rbegin() * (*X.begin());
		cout << res << endl;
	}
}
