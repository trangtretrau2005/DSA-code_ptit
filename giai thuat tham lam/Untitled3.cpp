#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n), b(n);
	for(int i=0;i<n;i++) {
		cin>>a[i];
		b[i] = a[i];
	}		

	sort(b.begin(), b.end());
	int cnt = 1;
	int t = n;

	for(int i = 0; i < n; i++) {
	    auto it = lower_bound(b.begin(), b.end(), a[i]);
	    // Tìm ph?n t? a[i] trong b, và ki?m tra n?u chua dùng (khác -1)
	    if(it != b.end() && *it == a[i]) {
	        // Ðánh d?u dã dùng
	        *it = -1; // ho?c INT_MIN cung du?c
	        cnt++;
	    }
	}
	cout << t - cnt << endl;
}

