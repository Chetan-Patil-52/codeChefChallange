#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        
        // APP 1
        
        int a,b,c;
        int n = 3;
        cin>>a>>b>>c;
        // vector<int> v(n);
        // Initializing the vector
        // for(int i=0;i<n;i++){
        //     cin >> v[i];
        // }
        // Sorting function
        // sort(v.begin(),v.end());
        // Printing outpput
        // for(auto i : v){
        //     cout << i << " ";
        // }
        // cout << v[1] << endl;
        
        // APP 2
        
        int max1 = a;
        if(b>max1){
            max1 = b;
        }
        if(c>max1){
            max1 = c;
        }
        
        
        int max2 = 0;
        if(a!= max1 && b!=max1){
            max2 = max(a,b);
        }
        else if(a!= max1 && c!= max1){
            max2 = max(a,c);
        }else{
            max2 = max(b,c);
        }
        cout << max2 << endl;
    }
}
