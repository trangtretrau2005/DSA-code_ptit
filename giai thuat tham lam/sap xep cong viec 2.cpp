#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		multimap<int,int,greater<int>> m;
		while(n--){
			int x,y,z;
			cin>>x>>y>>z;
			m.insert({z,y});
		}
		bool check[1001];
		memset(check,true,sizeof(check));
		long long sum=0;
		int cnt=0;
		for(auto i:m){
			for(int j=i.second;j>=1;j--)
			if(check[j]){
				cnt++;
				sum+=i.first;
				check[j]=false;
				break;
			}
			
		}
		cout<<cnt<<" "<<sum<<endl;
	}
}
