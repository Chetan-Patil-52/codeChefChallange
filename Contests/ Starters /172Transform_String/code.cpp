#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string A, B;
    cin >> A >> B;

    int n = A.size(), m = B.size();
    vector<int> indices;

    // Find rightmost occurrence in A for each character in B (processing B in reverse)
    int j = m - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (j >= 0 && A[i] == B[j]) {
            indices.push_back(i + 1); // Store 1-based index
            j--;
        }
    }

    if (j >= 0) { // B is not a subsequence of A
        cout << -1 << "\n";
        return;
    }

    reverse(indices.begin(), indices.end()); // Restore correct order

    // Compute the cost using the given formula
    ll sum_indices = accumulate(indices.begin(), indices.end(), 0LL);
    ll cost = (ll)m * n + n - m - ((ll)m * (m - 1) / 2) - sum_indices;

    cout << cost << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
