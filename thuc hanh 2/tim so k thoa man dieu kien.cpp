#include<bits/stdc++.h>
using namespace std;


bool check(int n){
	set<int> x;
	int t = x.size();
	int h= 0;
	while(n>0){
		int tmp= n%10;
		n/=10;
		h++;
		if(tmp>5) return false;
		else x.insert(tmp);
	}
	if(h==x.size()) return true;
	else return false;
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n,m;
		cin>>n>>m;
		int cnt=0;
		for(int i=n;i<=m;i++){
			if(check(i)){
				cnt++; 
			}
		}
		cout<<cnt<<endl;
	}
}
