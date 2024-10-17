#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int num;
    cin >> num;
    if(num%4==0){
        num++;
    }else{
        num--;
    }
    cout << num << endl;
}
