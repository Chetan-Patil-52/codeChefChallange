#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v1(n);
        for(int i=0;i<n;i++){
            int val;
            cin >> val;
            v1[i] = val;
        }
        for(int i=1;i<n;i++){
            if(v1[n-i] != 0){
                break;
            }else if(v1[n-i] == 0){
                v1.pop_back();
            }else{
                continue;
            }
        }
        
        cout << v1.size() - 1 << endl;
    }
}


// GPT Version 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v1(n);
        
//         for (int i = 0; i < n; i++) {
//             cin >> v1[i];
//         }

//         int last_non_zero = n - 1;
        
//         // Find the last non-zero element position
//         while (last_non_zero >= 0 && v1[last_non_zero] == 0) {
//             last_non_zero--;
//         }

//         cout << last_non_zero << endl;
//     }
// }
