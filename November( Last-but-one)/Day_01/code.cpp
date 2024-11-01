#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int h,x,y;
        cin >> h >> x >> y;
        
        h -= y; // Using the speial attack first
        int count = 1; // count will be 1 since we have attacked once
        
        if(h>0){
            count += (h + x - 1)/x;
        }
        cout << count << endl;
    }
}
