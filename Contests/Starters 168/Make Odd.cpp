#include <bits/stdc++.h>
#define lil long long int
using namespace std;

int main() {
	// your code goes here
	lil t;cin>>t;
	while(t--){
	    lil n;cin>>n;
	    string a,b;
	    cin>>a>>b;
	    int ans=0,c=0;
	    for(int i=0;i<n;i++){
	        if(a[i]=='1'&&b[i]=='1'){
	            ans+=1;
	        }
	        else if(a[i]=='1' || b[i]=='1'){
	            c++;
	        }
	    }
	    if(ans%2==1){
	        cout<<"YES\n";
	    }
	    else{
	        if(c>=1){
	            cout<<"YES\n";
	        }else{
	            cout<<"NO\n";
	        }
	    }
	}
    
}
