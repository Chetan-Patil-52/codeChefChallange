#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,d;
        cin >> a >> b >> d;
        int diff = abs(a-b);
        if(diff<=d){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
    }
}
