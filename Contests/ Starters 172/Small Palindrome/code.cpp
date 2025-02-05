#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int ones;cin>>ones;
        int twos;cin>>twos;
        int n = ones+twos;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            if(ones%2==0 && ones>0){
                v[i] = 1;
                v[n-1-i] = 1;
                ones -= 2;
            }else if(twos%2==0 && twos>0){
                v[i] = 2;
                v[n-1-i]=2;
                twos -= 2;
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<"";
        }
        cout<<endl;
    }
}
