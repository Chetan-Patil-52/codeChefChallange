#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> A(n);
        for(int i=0;i<n;i++){
            cin>> A[i];
        }
        
        int score = 0;
        for(int i=0;i<n-1;i++){
            score += min(A[i], A[i+1]);
        }
        
        while(q--){
            int i,x;
            cin>>i>>x;
            --i;// Converting into zero index
            
            if(i>0) score -=min(A[i-1],A[i]);
            if(i < n-1) score -=min(A[i+1],A[i]);
            
            A[i] = x;
            
            if(i>0) score +=min(A[i-1],A[i]);
            if(i < n-1) score +=min(A[i+1],A[i]);
            
            cout<<score<<'\n';
        }
       
    }
     return 0;
}
