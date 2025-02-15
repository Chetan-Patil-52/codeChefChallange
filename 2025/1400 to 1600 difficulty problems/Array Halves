#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;cin>>n;
    int size = 2*n;
    int a[size];
    for(int i=0;i<size;i++){
        cin >> a[i];
    }
    
    vector<ll> diff1;
    vector<ll> diff2;
    
    for(int i=0;i<size;i++){
        // check-1
        if(a[i] > size/2 && i < size/2){
            diff1.push_back(i+1);
        }
        
        // check-2
        if(a[i] <= size/2 && i >= size/2){
            diff2.push_back(i+1);
        }
    }
    
    ll op = 0;
    for(int i=0;i<diff1.size();i++){
        op += abs(diff1[i] - diff2[i]);
    }
    cout<<op<<endl;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
    }
}
