    #include <bits/stdc++.h>

    using namespace std;

    int n, k, m[1000001], tmpv[100001], dp[100000];
    #define mod 123456789

    void solution(){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>m[i];
            dp[i] = 1;
        }

        int max1 = 0;
        for(int i=0;i<n;i++){
            int j = i-1;
            while(j>=0){
                if(m[i] > m[j]) dp[i] = max(dp[i], dp[j] + 1);
                j--;
            }
            max1 = max(max1, dp[i]);
        }
        // for(int i=0;i<n;i++) cout<<dp[i]<<" ";
        cout<<max1<<endl;
    }

    int main(){
        // int t;
        // cin>>t;
        // while(t--){
            solution();
        // }
    }