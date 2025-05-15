#include<bits/stdc++.h>
using namespace std;

int a[100];
bool used[100]={false};
void Try(int index, int n){
	if(index==n+1){
		bool check=false;
		for(int i=2;i<=n;i++){
			if(a[i]-a[i-1]==1||a[i-1]-a[i]==1){
				check=true;
				break;
			}
		}	
		if(!check){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<endl;
		}	
	}
	for(int i=1;i<=n;i++){
		if(!used[i]){
			used[i]=true;
			a[index]=i;
			Try(index+1,n);
			used[i]=false;
		}
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		Try(1,n);
	}
}
