#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];
vector<int> x;
vector<string> y;

void Try(int pos){
	if(x.size()>=2){
		string s;
		for(int i=0;i<x.size();i++){
			s+=to_string(x[i]);
			if(i < x.size() - 1) s += " ";
		}
		y.push_back(s);
	}
	for(int i=pos;i<n;i++){
		if(x.empty()||a[i]>x.back()){
			x.push_back(a[i]);
			Try(i+1);
			x.pop_back();
		}
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	Try(0);
	sort(y.begin(),y.end());
	for(int i=0;i<y.size();i++){
		cout<<y[i]<<endl;
	}
}
