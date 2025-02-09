#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; // Read the number of test cases
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c; // Read the three integers

        int largest = 0, sec_largest = 0;

        // Check if a is the largest
        if (a >= b && a >= c) {
            largest = a;
            sec_largest = (b >= c) ? b : c;
        }
        // Check if b is the largest
        else if (b >= a && b >= c) {
            largest = b;
            sec_largest = (a >= c) ? a : c;
        }
        // Else, c is the largest
        else {
            largest = c;
            sec_largest = (a >= b) ? a : b;
        }

        // Output the sum of the two largest numbers
        int result = largest + sec_largest;
        cout << result << endl;
    }
    return 0;
}
