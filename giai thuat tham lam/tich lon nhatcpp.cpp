#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    long long max_product = LLONG_MIN;

    // Tích 2 ph?n t?
    max_product = max(max_product, 1LL * a[0] * a[1]);                 // 2 s? âm nh? nh?t
    max_product = max(max_product, 1LL * a[n-1] * a[n-2]);             // 2 s? duong l?n nh?t

    // Tích 3 ph?n t?
    max_product = max(max_product, 1LL * a[0] * a[1] * a[n-1]);        // 2 âm nh? nh?t * duong l?n nh?t
    max_product = max(max_product, 1LL * a[n-1] * a[n-2] * a[n-3]);    // 3 s? duong l?n nh?t

    cout << max_product << endl;
}
