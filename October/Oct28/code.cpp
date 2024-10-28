#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >>a>>b>>c>>d;
        int count = 2;
        if(a==c || a==d){
            count--;
        }
        if(b==c || b==d){
            count--;
        }
        cout << count << endl;
    }
}
