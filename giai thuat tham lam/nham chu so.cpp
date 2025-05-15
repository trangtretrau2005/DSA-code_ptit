#include<bits/stdc++.h>
using namespace std;


int to_num(string s){
	int res=0;
	for(int i=0;i<s.size();i++){
		res=res*10+s[i]-'0';
	}
	return res;
}

int main(){
	string n,m;
	cin>>n>>m;
	int n1;
	int n2;
	int m1,m2;
	for(int i=0;i<n.size();i++){
		if(n[i]=='5'){
		n[i]='6';
		
	}
}
	n1=to_num(n);
	for(int i=0;i<n.size();i++){
	if(n[i]=='6'){
		n[i]='5';
		
	}
}
	n2=to_num(n);
	for(int i=0;i<m.size();i++){
		if(m[i]=='5'){
		m[i]='6';
		
	}
}
	m1=to_num(m);
	for(int i=0;i<m.size();i++){
	if(m[i]=='6'){
		m[i]='5';
		
	}
}
	m2=to_num(m);
	cout<<m2+n2<<" "<<n1+m1;
}

