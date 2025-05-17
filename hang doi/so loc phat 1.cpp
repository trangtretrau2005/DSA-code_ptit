#include<bits/stdc++.h>
using namespace std;

long long lt(int n){
	if(n==0) return 1;
	return n*(n-1);
}

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		vector<string> v;
		queue<string> q;
		q.push("6");
		q.push("8");
		int cnt=1;
		long long h=pow(2,n)-1;
		while(h--){
			string tmp1 =q.front();
			q.pop();
			v.push_back(tmp1);
			string tmp2 =q.front();
			q.pop();
			v.push_back(tmp2);
			q.push(tmp1+"6");
			q.push(tmp1+"8");
			q.push(tmp2+"6");
			q.push(tmp2+"8");
		}
		for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
		cout<<endl;
	}
}
