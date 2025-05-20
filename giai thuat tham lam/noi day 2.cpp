#include<bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;

int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		priority_queue<long long,vector<long long>,greater<long long>> q;
		while(n--){
			long long x;
			cin>>x;
			q.push(x);
		}
		long long sum=0;
		while(q.size()>1){
			long long t1=q.top();
			q.pop();
			long long t2=q.top();
			q.pop();
			sum = sum + (t1+t2)%mod;
			sum%=mod;
			q.push((t1+t2)%mod);
			
		}
		cout<<sum<<endl;
	}
}
