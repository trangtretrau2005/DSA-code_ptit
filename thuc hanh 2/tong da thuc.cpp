#include <bits/stdc++.h>
using namespace std;

int res[10001];

void ok(string s){
	if(s!="+"){
		int i= s.find("x^");
		int d=stoi(s.substr(0,i));
		int c=stoi(s.substr(i+2));
		if(res[c]!=-1){
			res[c]+=d;
		}
		else res[c]=d;
	}
}

int main(){
	int test_case;
	cin>>test_case;
	cin.ignore();
	while(test_case--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		fill(res,res+10001,-1);
		string s=s1+" "+s2;
		stringstream ss(s);
		string tmp;
		while(ss>>tmp) ok(tmp);
		bool check=false;
		for(int j=10000;j>=0;j--){
			if(res[j]!=-1){
				if(check) cout<<"+ "<<res[j]<<"*x^"<<j<<" ";
				else {
					cout<<res[j]<<"*x^"<<j<<" ";
					check=true;
				}
				
			}
		}
		cout<<endl;
	}
}
