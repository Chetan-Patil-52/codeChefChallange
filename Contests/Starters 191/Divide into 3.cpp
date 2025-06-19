#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int imbalance = (N%3 == 0) ? 0 : 1;
    cout<<imbalance<<"\n";

    return 0;
}
