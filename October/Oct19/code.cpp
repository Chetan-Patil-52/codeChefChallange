#include <bits/stdc++.h>
using namespace std;
#define maxpoints 1500 // why this value is printing as result
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        // int maxpoints = 1500; // By using this line im getting my desired output 
        int x,y;
        cin >> x >> y;
        int ans1 = (x*2) + (x+y)*4;
        int ans2 = (y*4) + (x+y)*2;
        ans1 = maxpoints - ans1;
        ans2 = maxpoints - ans2;
        int result = max(ans1,ans2);
        // result =  maxpoints - result;
        cout << result << endl;
    }
}
