#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		sort(s.begin(),s.end());
		int cnt=1;
		for(int i=1;i<s.size();i++){
			if(s[i]==s[i-1]){
				cnt++;
			}
			else{
				break;
			}
		}
		if(cnt-1>s.size(
		)-cnt) cout<<"-1"<<endl;
		else cout<<"1"<<endl;
	}
}
