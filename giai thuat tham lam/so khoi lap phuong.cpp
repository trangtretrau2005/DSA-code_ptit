#include<bits/stdc++.h>
using namespace std;


bool check(string x,string y){
	int pos=0;
	for(char i:x){
		if(i==y[pos]) pos++;
	}
	return pos==y.size();
}

int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		bool ok=false;
		for(int i=cbrt(n);i>=1;i--){
			long long t=pow(i,3);
			if(check(to_string(n),to_string(t))){
			cout<<t<<endl;
			ok=true;
			break;
			
			}
		}		
		if(!ok) cout<<-1<<endl;
	}
}
