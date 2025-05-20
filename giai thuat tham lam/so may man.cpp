#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a=0;
		int b=n/7;
		while(b>=0){
			if((n-7*b)%4==0){
				a=(n-7*b)/4;
				break;
			}
			b--;
		}
		if(b<0) cout<<-1<<endl;
		else{
			for(int i=1;i<=a;i++) cout<<4;
			for(int i=1;i<=b;i++) cout<<7;
			cout<<endl;
		}
	
	}
}
