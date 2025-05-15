#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		string s;
		cin>>n>>s;
		sort(s.begin(),s.end());
		int cnt=1;
		for(int i=1;i<s.size();i++){
			if(s[i]==s[i-1]) cnt++;
			else break;
		}
		int tmp = (s.size()-cnt)/(n-1);
		if(cnt-1<=tmp) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}
