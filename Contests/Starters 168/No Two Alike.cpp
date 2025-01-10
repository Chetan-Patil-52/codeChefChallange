#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);

    // Read the array
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Step 1: Group indices by the values in the array
    vector<vector<long long>> b(n + 1);  // Store indices of each number
    for (long long i = 0; i < n; i++) {
        b[a[i]].push_back(i);
    }

    // Step 2: Find the first and last occurrence of duplicate values
    vector<pair<long long, long long>> inv;
    for (long long i = 0; i < n + 1; i++) {
        if (b[i].size() > 1) {
            inv.push_back({b[i][0], b[i].back()});
        }
    }

    // Step 3: Assign points to the first and last occurrence of duplicates
    vector<long long> pts(n, 0);
    for (auto x : inv) {
        pts[x.first] = 1;   // First occurrence gets point 1
        pts[x.second] = 2;  // Last occurrence gets point 2
    }

    // Step 4: Calculate the result based on the points
    long long cnt = 0;
    long long ans = 0;
    for (long long i = 0; i < n; i++) {
        if (pts[i] == 1) {
            cnt++;
            ans++;
        }
        else if (pts[i] == 2) {
            cnt--;
            ans++;
        }
        else {
            if (cnt) ans++;
        }
    }

    // Step 5: Calculate the number of unique elements
    sort(a.begin(), a.end());
    long long unq = unique(a.begin(), a.end()) - a.begin();

    // Final result
    cout << ans - (n - unq) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
