#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		long long x,y;
		cin>>x>>y;
		while(1){
			if(y%x==0){
				cout<<"1/"<<y/x<<endl;
				break;
			}
			else{
				long long res= y/x+1;
				cout<<"1/"<<res<<" + ";
				x= res*x-y;
				y=y*res;
			}
		}
	}
}
