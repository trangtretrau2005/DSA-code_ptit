#include<bits/stdc++.h>
using namespace std;

char c;
string s; 
bool used[100];

void Try(char pos){
	if(s.size() == int(c - 'A') + 1){
		bool check=false;
		for(int i=1;i<s.size()-1;i++){
			if(s[i]=='A'||s[i]=='E'){
				if(s[i-1]!='A'&&s[i+1]!='A'&&s[i-1]!='E'&&s[i+1]!='E'){
				check=true;
				break;
			}
			}
		}
		if(!check){
			cout<<s<<endl;
		}
		return;
	}
	for(char i='A';i<=c;i++){
		if(!used[i]){
			used[i]=true;
			s.push_back(i);
			Try(pos+1);
			used[i]=false;
			s.pop_back();
	}
	}
	
}

int main(){
	cin>>c;
	Try('A');
}
