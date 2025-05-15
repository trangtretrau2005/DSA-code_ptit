#include<bits/stdc++.h>
using namespace std;



int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n,m;
		cin>>n>>m;
		multimap<int,int> t;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			t.insert({abs(m-a),a});
		}
		for(auto i: t){
			cout<<i.second<<" ";
		}
		cout<<endl;
	}
}
