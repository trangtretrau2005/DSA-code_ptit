#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		queue<string> y;
		y.push("1");
		int cnt=1;
		while(n--){
			string tmp=y.front();
			y.pop();
			cout<<tmp<<" ";
			y.push(tmp+"0");
			y.push(tmp+"1");
		}

		cout<<endl;
	}
}
