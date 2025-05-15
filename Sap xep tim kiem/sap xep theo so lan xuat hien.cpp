#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[100001]={};
		set<int> x;
		while(n--){
			int tmp;
			cin>>tmp;
			a[tmp]++;
			x.insert(tmp);
		}
		multimap<int,int,greater<int>> m;
		for(auto i:x){
			m.insert({a[i],i});
		}
		for(auto i:m){
			for(int j=0;j<i.first;j++)
			cout<<i.second<<" ";
		}
		cout<<endl;
	}
}
