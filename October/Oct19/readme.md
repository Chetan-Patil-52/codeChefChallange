# Maximum Points Calculator

This program calculates the maximum remaining points from a starting value of 1500, based on two potential calculations involving two inputs for each test case. It takes multiple test cases and, for each test case, computes and prints the maximum remaining points.

## How the Program Works:

1. Input:
   - The first input `t` is the number of test cases.
   - For each test case, the program takes two integers `x` and `y`.
   
2. Processing:
   - The program calculates two potential results based on the following formulas:
     - `ans1 = (x * 2) + (x + y) * 4`
     - `ans2 = (y * 4) + (x + y) * 2`
   - These results are subtracted from a constant value `maxpoints` (1500) to compute the remaining points.
   
3. Output:
   - For each test case, the program prints the maximum of the two remaining points.

## Example:

