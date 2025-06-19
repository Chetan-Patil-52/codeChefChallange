#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        
        int root =(int) sqrt(num);
        
        int nearest = root * root;
        
        cout<<nearest<<endl;
        
    }
    return 0;
}
