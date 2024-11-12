#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        // cout << x_val;
        cin >> x >> y;
        
        int max_months = (y-1) / x;
        
        cout << max_months << endl;
    }
    return 0;
}
