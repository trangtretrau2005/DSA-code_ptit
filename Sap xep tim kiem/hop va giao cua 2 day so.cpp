#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n,m;
		cin>>n>>m;
		set<int> x,y,z;
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			x.insert(tmp);
			z.insert(tmp);
		}
		for(int i=0;i<m;i++){
			int tmp; cin>>tmp;
			y.insert(tmp);
			z.insert(tmp);
		}
		for(int t:z) cout<<t<<" ";
		cout<<endl;
		for(int t:x){
			if(y.count(t)!=0) cout<<t<<" ";
		} 
		cout<<endl;
	}
}
