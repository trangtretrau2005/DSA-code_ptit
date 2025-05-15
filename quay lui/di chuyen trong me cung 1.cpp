#include<bits/stdc++.h>
using namespace std;

char path[100];
vector<string> s;
bool used[100][100]={false};


void Try(int index,int a[100][100], int i, int j, int n){
	if(i==n-1&&j==n-1){
		path[index] = '\0';
		s.push_back(string(path));
		return;
	}
	if(a[i+1][j]==1&&used[i+1][j]==false&&i+1<n){
		path[index]='D';
		used[i+1][j]=true;
		Try(index+1,a,i+1,j,n);
		used[i+1][j]=false;
	}
	if(a[i][j+1]==1&&used[i][j+1]==false&&j+1<n){
		path[index]='R';
		used[i][j+1]=true;
		Try(index+1,a,i,j+1,n);
		used[i][j+1]=false;
	}
}

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		int a[100][100];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
			cin>>a[i][j];
		}
		if(a[0][0] == 1){
    		used[0][0] = true;
   		 Try(0, a, 0, 0, n);
}
		if(s.empty()) cout<<"-1";
		else{
			sort(s.begin(),s.end());
			for(int i=0;i<s.size();i++){
				cout<<s[i]<<" ";
			}
		}
		cout<<endl;
		s.clear();
	}
}




