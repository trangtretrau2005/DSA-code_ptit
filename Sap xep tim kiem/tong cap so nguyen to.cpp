#include<bits/stdc++.h>
using namespace std;


bool check(int n){
	if(n<2) return false;
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return false;
		}
		return true;
	}
}


int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		int x=0;
		cin>>n;
		for(int i=1;i<=n/2;i++){
			if(check(n-i)&&check(i)) {
			cout<<i<<" "<<n-i<<endl;
			
			x=1;
			break;
		}
		}
		if(x==0) cout<<-1<<endl;
	}
}
