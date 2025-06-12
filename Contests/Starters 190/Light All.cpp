#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        vector<bool> left(n,false);
        int pos = true;
        
        for(int i=0;i<n;i++){
            if(s[i]=='1') continue;
            if(s[i-1] == '1' && !left[i-1] && i>0) continue;
            if(s[i+1] == '1' && i < n-1){
                left[i+1] = true;
                continue;
            }
            pos = false;break;
        }
        if(pos) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
