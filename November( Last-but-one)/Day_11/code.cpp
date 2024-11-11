#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        bool isPrime = true;
        if(x==0 || x==1){
            isPrime = false;
        }else{
            for(int i=2;i*i<=x;i++){
            if(x%i==0){
                isPrime = false;
                break;
            }
        }
        }
        
        string result = isPrime ? "yes" : "no";
        cout << result << endl;
    }
}
