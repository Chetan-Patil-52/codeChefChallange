#include <bits/stdc++.h>
using namespace std;

int longest_best(vector<int>& arr){
    int n = arr.size();
    int maxi = 1;
    int curr = 1;
    
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            curr++;
        }else{
            maxi = max(maxi,curr);
            curr = 1;
        }
    }
    return max(maxi,curr);
}

int main() {
	// your code goes here
    int t;
    cin >>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        
        // check if we get longest streak in original array
        int best_streak = longest_best(v);
        
        // Check if modified streak is greater or not
        for(int i=0;i<n;i++){
            vector<int> modified = v;
            modified[i] = v[i] * x;
            
            
            int new_streak = longest_best(modified);
            best_streak = max(best_streak,new_streak);
        }
        cout<<best_streak<<endl;
    }
    return 0;
}
