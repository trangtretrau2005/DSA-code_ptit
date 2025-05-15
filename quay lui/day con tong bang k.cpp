#include <bits/stdc++.h>
using namespace std;

vector<int> tmp;
vector<vector<int>> res;



void Try(int index, int a[], int n, int k, int sum) {
    if (sum == k) {
        res.push_back(tmp); 	
        return;
    }
    for (int i = index; i < n; i++) {  
        if (sum + a[i] <= k) {  
            tmp.push_back(a[i]);  
            Try(i + 1, a, n, k, sum + a[i]); 
            tmp.pop_back(); 
        }
    }
}

int main() {
    int test_case;
    cin >> test_case;
    while (test_case--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);  
        res.clear();
        tmp.clear();
        Try(0, a, n, k, 0);
        if (res.empty()) {
            cout << "-1\n";  
        } else {
            for (int i = 0; i < res.size(); i++) {
                cout << "[";
                for(int j = 0; j < res[i].size(); j++){
                    cout << res[i][j];
                    if(j < res[i].size() - 1) cout << " ";
                }
                cout << "] ";
            }
            cout << "\n";
        }
    }
    return 0;
}
