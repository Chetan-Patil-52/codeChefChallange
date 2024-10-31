#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int chef,chefina,k;
        cin  >> chef >> chefina >> k;
        int distance = abs(chef-chefina);
        int step = (distance + k - 1)/k;
        cout << step << endl;
    }
}
