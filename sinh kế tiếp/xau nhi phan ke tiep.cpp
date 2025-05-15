#include <bits/stdc++.h>
using namespace std;

void check(){
	string s;
	cin>>s;
	int i=s.length()-1;
	while(i>=0&&s[i]=='1'){
		s[i]='0';
		i--;
	}
	s[i]='1';
	for(int i=0;i<s.length();i++){
		cout<<s[i];
	}
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		check();
	}
}
