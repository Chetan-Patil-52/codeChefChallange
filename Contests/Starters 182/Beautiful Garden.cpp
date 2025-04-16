#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc; 
    cin >> tc;
    while(tc--){
        int n, minBloom, totalDays;
        cin >> n >> minBloom >> totalDays;
        
        vector<int> regrow(n);  
        for(int i = 0; i < n; ++i){
            cin >> regrow[i];
        }
        
        vector<int> bloomDay(n, 1); 
        int pluckedCount = 0;
        
        for (int currentDay = 1; currentDay <= totalDays; ++currentDay) {
            vector<pair<int, int>> blooming; 
            
            for (int i = 0; i < n; ++i) {
                if (bloomDay[i] <= currentDay) {
                    blooming.push_back({regrow[i], i});
                }
            }
            
            int canPluck = (int)blooming.size() - minBloom;
            if (canPluck <= 0)
                continue;
            
            sort(blooming.begin(), blooming.end());
            for (int j = 0; j < canPluck; ++j) {
                int pos = blooming[j].second;
                bloomDay[pos] = currentDay + regrow[pos];
                pluckedCount++;
            }
        }
        
        cout << pluckedCount << "\n";
    }
    return 0;
}
