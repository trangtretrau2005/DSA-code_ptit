#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	set<int> b;
	vector<set<int>> v;
	for(int &i:a) cin>>i;
	for(int i:a){
		b.insert(i);
		v.push_back(b);
	}
	int cnt=v.size()-1;
	for(int i=v.size()-1;i>=0;i--){
		cout<<"Buoc "<<cnt<<": ";
		for(auto j:v[i]) cout<<j<<" ";
		cnt--;
		cout<<endl;
	}
}
