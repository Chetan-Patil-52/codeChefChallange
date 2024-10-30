#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin>> a >> b;
        vector<int> v(a);
        
        for(int i=0;i<a;i++){
            cin >> v[i];
        }
        
        
        int count = 0;
        for(int i=0;i<a;i++){
            if((v[i]+b)%7==0){
                count++;
            }
        }
        
        cout << count << endl;
    }
}
