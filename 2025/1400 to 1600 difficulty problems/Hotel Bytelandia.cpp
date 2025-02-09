#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<pair<int,int>> time;
    for(int i=0;i<n;i++){
        int arival;cin>>arival;
        time.push_back({arival,1});
    }
    for(int i=0;i<n;i++){
        int depart;cin>>depart;
        time.push_back({depart,0});
    }
    sort(time.begin(),time.end());
    
    long long count = 0,ans = 0;
    for(pair<int,int> i : time){
        if(i.second == 1){
            count++;
        }else{
            count--;
        }
        ans = max(ans,count);
    }
    cout<<ans<<endl;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
    }
}
