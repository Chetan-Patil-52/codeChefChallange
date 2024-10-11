# Minimum number of coins

Review of the approach:
Your approach solves the problem efficiently by following these steps:

Input Parsing: You take an integer input x (the amount) and then check if it can be broken into multiples of 10 or 5.

Logic:

If the value of x is divisible by 5 or 10, you calculate the number of 10-rupee and 5-rupee coins needed.
You first find the number of 10-rupee coins by performing integer division x / 10.
The remainder is then checked to see how many 5-rupee coins are needed (rem / 5).
If x is not divisible by either 5 or 10, you output -1, as it's impossible to form x using just 5 and 10 coins.
Output:

The sum of count_10 and count_5 gives the total number of coins for that case.
If x cannot be expressed as a sum of 5 and 10, the program prints -1.
Code Review:
Efficiency:

The time complexity of your approach is O(1) for each test case, as you're only performing basic arithmetic operations. This makes the solution optimal with a total complexity of O(T) for T test cases.
Edge Cases:

Your approach handles the edge case where x is not divisible by 5 well by returning -1.
Clarity:

The logic is straightforward and easy to understand.
You could improve readability by using more descriptive variable names (e.g., x can be renamed to amount).
Potential improvements:
Early Exit Condition:

Once you check that x % 5 != 0, there's no need to further process that test case since it can't be formed using 5-rupee or 10-rupee coins. In your case, the logic already covers this, so no major optimization is needed.
Edge Case Considerations:

The code assumes x will always be non-negative. If negative values are possible, you might want to include additional checks.
Alternative Approaches:
Your approach is already optimal for the problem since it computes the result in constant time O(1) per test case. There's no need for a more optimal algorithm as this approach minimizes both time and space complexity effectively. Any changes would be more about stylistic or minor optimization improvements rather than significant algorithmic improvements.

Rating:
Efficiency: 10/10
Clarity: 8/10 (variable naming could be slightly more descriptive)
Correctness: 10/10
