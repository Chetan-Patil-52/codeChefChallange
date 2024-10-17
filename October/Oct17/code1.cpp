#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string result;
    while(t--){
        int a, x, b, y;
        cin >> a >> x >> b >> y;
        float Alice_Speed = float(a)/x; // Explicitly cast one operand to float
        float Bob_Speed = float(b)/y;   // Explicitly cast one operand to float
        if (Alice_Speed == Bob_Speed) {
            cout << "Equal\n";
        }
        else {
            result = (Alice_Speed > Bob_Speed) ? "Alice\n" : "Bob\n";
            cout << result;
        }
    }
}
