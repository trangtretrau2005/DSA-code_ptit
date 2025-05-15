#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		set<int> s;
		while(n--){
			int tmp;
			cin>>tmp;
			s.insert(tmp);
		}
		int m1=1e9;
		int m2=1e9;
		m1=*s.begin();
		s.erase(s.begin());
		if(!s.empty()){
			m2=*s.begin();
		}
		if(m2!=1e9) cout<<m1<<" "<<m2<<endl;
		else cout<<-1<<endl;
	}
}
