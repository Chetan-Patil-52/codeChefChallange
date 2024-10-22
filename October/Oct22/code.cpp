#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int opp1 = a+c;
        int opp2 = b+d;
        if(opp1 == 180 && opp2 == 180){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
    }
}
