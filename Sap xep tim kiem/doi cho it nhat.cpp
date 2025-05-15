#include<bits/stdc++.h>
using namespace std;


int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int cnt=0;
		for(int i=0;i<n;i++){
			int m=i;
			for(int j=i+1;j<n;j++){
				if(a[j]<a[m]) m=j;
			}
			if(i!=m) {
			swap(a[i],a[m]);
			cnt++;
		}
		}
		cout<<cnt<<endl;
	}
}
