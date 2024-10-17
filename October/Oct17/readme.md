# Speed Comparison Program

## Overview
This program compares the speeds of Alice and Bob based on their respective distances and times. The program reads multiple test cases and outputs who is faster, or if their speeds are equal.

### Problem Description
Given:
- Alice's distance `a` and time `x`
- Bob's distance `b` and time `y`

The task is to calculate their speeds and determine:
- If Alice is faster, print `Alice`
- If Bob is faster, print `Bob`
- If both are equally fast, print `Equal`

### Approach
1. Input:
   - The program first takes an integer `t`, representing the number of test cases.
   - For each test case, it reads 4 integers:
     - Alice's distance `a`
     - Alice's time `x`
     - Bob's distance `b`
     - Bob's time `y`

2. Speed Calculation:
   - Alice's speed = `a / x`
   - Bob's speed = `b / y`
   - Both speeds are calculated using floating-point division.

3. Comparison:
   - If Alice's speed is greater than Bob's, print `Alice`.
   - If Bob's speed is greater, print `Bob`.
   - If both speeds are equal, print `Equal`.

### Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string result;
    while(t--){
        int a, x, b, y;
        cin >> a >> x >> b >> y;
        float Alice_Speed = float(a)/x;
        float Bob_Speed = float(b)/y;
        if (Alice_Speed == Bob_Speed) {
            cout << "Equal\n";
        }
        else {
            result = (Alice_Speed > Bob_Speed) ? "Alice\n" : "Bob\n";
            cout << result;
        }
    }
}
