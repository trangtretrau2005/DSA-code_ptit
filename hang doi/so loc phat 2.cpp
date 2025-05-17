#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		long long h=pow(2,n)-1;
		queue<string> q;
		q.push("6");
		q.push("8");
		vector<string> v;
		long long cnt=0;
		while(h--){
			string t1= q.front();
			v.push_back(t1);
			q.pop();
			string t2=q.front();
			v.push_back(t2);
			q.pop();
			q.push(t1+"6");
			q.push(t1+"8");
			q.push(t2+"6");
			q.push(t2+"8");
			cnt+=2;
		}
		cout<<cnt<<endl;
		for(string i: v) cout<<i<<" ";
		cout<<endl;
	}
}
