#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	stack<int> x;
	while(cin>>s){
		if(s=="push"){
			int n;
			cin>>n;
			x.push(n);
		}
		else if(s=="pop"){
			x.pop();
		}
		else if(s=="show"){
			if(x.empty()) cout<<"empty";
			else{
				vector<int> a;
				while(!x.empty()){
					a.push_back(x.top());
					x.pop();
				}
				for(int i=a.size()-1;i>=0;i--) {
					cout<<a[i]<<" ";
					x.push(a[i]);
				}
				
			}
			cout<<endl;
		}
	}
}
