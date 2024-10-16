#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int chefina_floor,chef_floor;
        int a,b;
        cin >> a >> b;
        // To calculate chef_floor
        chef_floor = (a%10==0) ? (a/10) : (a/10)+1;
        // To calculate chefina floor
        chefina_floor = (b%10==0) ? (b/10) : (b/10)+1;
        int diff = abs(chefina_floor - chef_floor);
        cout << diff << endl;
    }
}
