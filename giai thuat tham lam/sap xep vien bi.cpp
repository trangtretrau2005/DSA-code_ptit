#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int t=0,x=0;
	for(char i:s){
		if(i=='T') t++;
		if(i=='X') x++;
	}
	int cnt=0;
	for(int i=0;i<x;i++){
		if(s[i]=='D'){
			int d=n-1;
			while(s[d]!='X') d--;
			swap(s[i],s[d]);
//			cout<<s[i]<<" "<<s[d]<<endl;
			cnt++;
		}
		else if(s[i]=='T'){
			int h=x;
			while(s[h]!='X') h++;
			swap(s[i],s[h]);
			cnt++;
		}
	}
	for(int i=x;i<t+x;i++){
		if(s[i]!='T'){
			int h=t+x;
			while(s[h]!='T') h++;
			cnt++;
		}
	}
	cout<<cnt;
}
