#include<bits/stdc++.h>
using namespace std;

char result[100];
bool used[100]={false};

void print(string s){
	for(int i=0;i<s.size();i++){
		cout<<result[i];
	}
	cout<<" ";
}

void Try(int index, string s){
	if(index==s.size()){
		print(s);
		return;
	}
	for(int i=0;i<s.size();i++){
		if(used[i]==false){
			used[i]=true;
			result[index]=s[i];
			Try(index+1,s);
			used[i]=false;
		}
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		string s;
		cin>>s;
		Try(0,s);
		cout<<endl;
	}
}
