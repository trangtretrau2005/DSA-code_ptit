#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		int cnt=0;
		int a[10]={1,2,5,10,20,50,100,200,500,1000};
		int i=9;
		while(n>0){
			int tmp=n/a[i];
			cnt+=tmp;
			n=n-a[i]*tmp;
			i--;
		}
		cout<<cnt<<endl;
	}
}
