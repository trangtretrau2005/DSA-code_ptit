#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		priority_queue<int,vector<int>,greater<int>> x;
		priority_queue<int,vector<int>> y;
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			y.push(tmp);
		}
		for(int i=0;i<m;i++){
			int tmp;
			cin>>tmp;
			x.push(tmp);
		}
		cout<<x.top()*y.top()<<endl;
	}
}
