#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_case;
	cin>>test_case;
	while(test_case--){
		int n;
		cin>>n;
		queue<pair<int,int>> q;
		q.push({n,0});
		unordered_set<int> visit;
		visit.insert(n);
		int kq=0;
		while(!q.empty()){
			pair<int,int> x;
			x=q.front();
			q.pop();
			int x1= x.first;
			int x2= x.second;
			if(x1==1){
				kq=x2;
				break;
			}
			int m= x1-1;
			if(visit.count(m)==0) {
				visit.insert(m);
				q.push({m,x2+1});
			}
			for(int i=2;i*i<=x1;i++){
				if(x1%i==0){
					int u=i;
					int v=x1/i;
					if(u>1&&v>1){
						int max1=max(u,v);
						if(visit.count(max1)==0){
							visit.insert(max1);
							q.push({max1,x2+1});
						}
					}
				}
			}
		}
		cout<<kq<<endl;
	}
}
