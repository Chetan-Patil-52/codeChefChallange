#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >>t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        // int n = 3;
        vector<int> v = {a,b,c};
        // v.push_back(a);
        // v.push_back(b);
        // v.push_back(c);
        
        sort(v.begin(),v.end());
        
        
        int sum = accumulate(v.begin(),v.end(),0);
        
        cout << sum - v[0] << endl;
    }
}
