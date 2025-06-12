#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> d(n);
        vector<int> p(n);
        
        vector<int> max_d(n);// For suffix checks
        
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int maxi = 0;
        for(int i=n-1;i>=0;i--){
            maxi = max(maxi,d[i]);
            max_d[i] = maxi;
        }
        
        
        int cnt = 0;
        // here we check 
        for(int i=0;i<n;i++){
            if(x < d[i]){
                // cnt = 0;
                break;
            }
            if (x >= p[i] && (i == n-1 || x - 1 >= max_d[i + 1])) {

                cnt++;
                x-=1;
            }
        }
        cout<<cnt<<"\n";
    }
}
