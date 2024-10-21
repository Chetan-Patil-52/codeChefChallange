#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x,p;
        // if(x==0){
        //     cout << "fail" << endl;
        // }
        cin >> n >> x >> p;
        int incorrectQ = n - x;
        int ChefScore = (x*3) + incorrectQ*(-1);
        // cout << ChefScore << endl;
        // string result = "fail";
        
        string result = (ChefScore >= p) ? "pass" : "fail";
        cout << result << endl;
    }
}
