#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        // inputs
        int n = 3;
        int a1,a2,a3,b1,b2,b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        vector<int> v1 = { a1,a2,a3};
        vector<int> v2 = { b1,b2,b3};
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        int alice = v1[n-1] + v1[n-2];
        int bob = v2[n-1] + v2[n-2];
        
        if(alice>bob){
            cout << "alice" << endl;
        }else if(bob > alice){
            cout << "bob" << endl;
        }else{
            cout << "tie" << endl;
        }
    }
}
