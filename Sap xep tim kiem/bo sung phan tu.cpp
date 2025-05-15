#include<bits/stdc++.h>
using namespace std;


int main(){
	int test;
	cin>>test;
	while(test--){
		int m[1001]={};
		int n;
		cin>>n;
		set<int> s;
		while(n--){
			int tmp;
			cin>>tmp;
			s.insert(tmp);
		}
		int max=*s.rbegin();
		int min =*s.begin();
		int cnt=max-min-1-(s.size()-2);
		cout<<cnt<<endl;
	}
}
