#include<bits/stdc++.h>
using namespace std;


void sinh(int arr[], int m, int n){
	int i=m;
	while(i>=1&&arr[i]==n-m+i){
		i--;
	}
	if(i>=1){
		arr[i]=arr[i]+1;
		for(int j=i+1;j<=m;j++){
			arr[j]=arr[i]+j-i;
		}
		for(int i=1;i<=m;i++) cout<<arr[i]<<" ";
	}
	else {
		for(int j=1;j<=m;j++) cout<<j<<" "; 
	}
	
		
}


int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n,m;
		cin>>n>>m;
		int arr[m+1];
		for(int i=1;i<=m;i++){
			cin>>arr[i];
		}
		sinh(arr,m,n);
		cout<<endl;
	}
}
