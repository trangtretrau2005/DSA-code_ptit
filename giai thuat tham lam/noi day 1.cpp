#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		ll n;
		cin>>n;
		ll a[n];
		priority_queue<int,vector<int>,greater<int>> p;
		for(int i=0;i<n;i++) {
		cin>>a[i];
		p.push(a[i]);
	}
		ll sum =0;
		while(p.size()>1){
			ll t1 = p.top(); 
			p.pop();
			ll t2 = p.top();
			p.pop();
			sum+=t1+t2;
			ll tmp=t1+t2;
			p.push(tmp);
		}
		cout<<sum<<endl;
	}
}
