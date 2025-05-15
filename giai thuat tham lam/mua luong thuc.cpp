#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n,s,m;
		cin>>n>>s>>m;
		int k=s-(s/7);
		int need=s*m;
		int buy=n*k;
		if(buy<need){
			cout<<-1<<endl;
		}
		else{
			cout<<(need+n-1)/n<<endl;
		}
	}
	
}
