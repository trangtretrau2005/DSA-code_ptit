#include<bits/stdc++.h>
using namespace std;


int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		string s;
		cin>>n>>s;
		map<char,int> m;
		long long sum=0;
		for(char i:s){
			m[i]++;
		}
		priority_queue<int> q;
		for( auto i:m){
			q.push(i.second);
		}
		while(n--){
			int t=q.top();
			q.pop();
			q.push(t-1);	
		}
		while(!q.empty()){
			sum+=(pow(q.top(),2));
			q.pop();
		}
		cout<<sum<<endl;
	}
}
