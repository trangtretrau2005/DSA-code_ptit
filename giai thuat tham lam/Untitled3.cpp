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
	    // T�m ph?n t? a[i] trong b, v� ki?m tra n?u chua d�ng (kh�c -1)
	    if(it != b.end() && *it == a[i]) {
	        // ��nh d?u d� d�ng
	        *it = -1; // ho?c INT_MIN cung du?c
	        cnt++;
	    }
	}
	cout << t - cnt << endl;
}

