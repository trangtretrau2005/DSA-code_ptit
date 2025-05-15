#include<bits/stdc++.h>
using namespace std;

char c;
int n;
char res[100];

void print(int index){
	for(int i=0;i<index;i++){
		cout<<res[i];
	}
	cout<<endl;
}
void Try(int index, char pos){
	if(index==n){
		print(index);
		return;
	}
	for(char i=pos;i<=c;i++){
		res[index]=i;
		Try(index+1,i);
	}
}

int main(){
	cin>>c>>n;
	Try(0,'A');
}
