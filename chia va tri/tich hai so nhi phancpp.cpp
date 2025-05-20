#include<bits/stdc++.h>
using namespace std;


int main(){
	int test;
	cin>>test;
	while(test--){
		string x,y;
		cin>>x>>y;
		long long a=0,b=0;
		for(int i=0;i<x.size();i++){
			if(x[i]=='1')
			a+=(pow(2,x.size()-i-1));
		}
		for(int i=0;i<y.size();i++){
			if(y[i]=='1')
			b+=(pow(2,y.size()-1-i));
		}
		cout<<a*b<<endl;
	}
}
