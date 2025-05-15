#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &i:a) cin>>i;
	multiset<int> s;
	int cnt=0;
	for(int i:a){
		s.insert(i);
		cout<<"Buoc "<<cnt<<": ";
		for(auto j:s) cout<<j<<" ";
		cnt++;
		cout<<endl;
	}
}
