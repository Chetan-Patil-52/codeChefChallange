#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int cumulative_score1 = 0; // cumulative score for player 1
    int cumulative_score2 = 0; // cumulative score for player 2
    int max_lead = 0;
    int winner = 0;
    
    for (int i = 0; i < n; i++) {
        int score1, score2;
        cin >> score1 >> score2;
        
        // Update cumulative scores
        cumulative_score1 += score1;
        cumulative_score2 += score2;
        
        // Calculate the current lead and the leader
        int current_lead = abs(cumulative_score1 - cumulative_score2);
        
        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = (cumulative_score1 > cumulative_score2) ? 1 : 2;
        }
    }
    
    cout << winner << " " << max_lead << endl;
    return 0;
}
