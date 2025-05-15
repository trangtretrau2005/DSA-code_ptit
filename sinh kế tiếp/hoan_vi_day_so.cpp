#include <iostream>
#include <algorithm>
using namespace std;

int n, a[11], perm[11];
bool used[11];

void backtrack(int idx) {
    if (idx == n) {
        for (int i = 0; i < n; i++)
            cout << perm[i] << " ";
        cout << "\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = true;
            perm[idx] = a[i];
            backtrack(idx + 1);
            used[i] = false;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    backtrack(0);
    return 0;
}


