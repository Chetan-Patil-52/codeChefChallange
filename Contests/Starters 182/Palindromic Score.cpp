#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int X, Y, Z;
        cin >> X >> Y >> Z;
        
        auto palScore = [&](int a, int b) -> int {
            int sumPairs = (a - a % 2) + (b - b % 2);
            if(a % 2 == 1 || b % 2 == 1){
                sumPairs++; // place one odd-count char in the center
            }
            return sumPair;
        };
        
        int candidate1 = palScore(Y, Z); // Bob deletes all A's
        int candidate2 = palScore(X, Z); // Bob deletes all B's
        int candidate3 = palScore(X, Y); // Bob deletes all C's
        
        int ans = min({candidate1, candidate2, candidate3});
        cout << ans << "\n";
    }
    
    return 0;
}
