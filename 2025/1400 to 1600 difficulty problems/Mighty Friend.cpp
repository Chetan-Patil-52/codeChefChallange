#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i] ;
    }
    
    vector<int> motu,tomu;
    for(int i=0;i<n;i++){
        if(i%2==0){
            motu.push_back(nums[i]);
        }else{
            tomu.push_back(nums[i]);
        }
    }
    sort(motu.begin(),motu.end(),greater<int>());
    sort(tomu.begin(),tomu.end());
    for(int i=0;i<min(k, min((int)motu.size(),(int)tomu.size()));i++){
        if(motu[i] > tomu[i]){
            swap(motu[i],tomu[i]);
        }else{
            break;
        }
    }
    if(accumulate(motu.begin(),motu.end(),0) < accumulate(tomu.begin(),tomu.end(),0)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
    }
}
