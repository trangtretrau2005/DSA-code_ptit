#include<bits/stdc++.h>
using namespace std;

int a[100];
int n;
vector<vector<int>> y;

void Try(){
	int tmp=n;
	
	while(tmp--){
		vector<int> x;
		for(int i=0;i<n;i++) x.push_back(a[i]);
		y.push_back(x);
		for(int i=0;i<n-1;i++){
			a[i]=a[i]+a[i+1];
		}
		n--;
}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		Try();
		for(int i=y.size()-1;i>=0;i--){
			cout<<"[";
			for(int j=0;j<=y[i].size()-1;j++){
				if(j==y[i].size()-1) cout<<y[i][j];
				else cout<<y[i][j]<<" ";
			}
			cout<<"] ";
		}	
		cout<<endl;
		y.clear();
	}
}
