#include<bits/stdc++.h>
using namespace std;


struct ok{
	int t1,t2;
};

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		ok a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].t1;
			cin>>a[i].t2;
		}
		sort(a,a+n,[](ok a, ok b){
			return a.t2<b.t2;	
		});
		int cnt=1;
		int tmp=a[0].t2;
		for(int i=1;i<n;i++){
			if(a[i].t1>=tmp){
				cnt++;
				tmp=a[i].t2;
			}
		}
		cout<<cnt<<endl;
	}
}
