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
		for(auto i:s){
			m[i]++;
		}
		long long sum=0;
		multiset<int> v;
		for(auto i:m){
			v.insert(i.second);
		}
		while(n--){
			int t=*v.rbegin();
			v.erase(v.find(t));
			v.insert(t-1);
		}
		for(int i:v) sum+=pow(i,2);
		cout<<sum<<endl;
	}
}
