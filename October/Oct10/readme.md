# Approach:
The problem revolves around calculating the total duration of the last season of a show, where episodes have alternating durations based on their index (even or odd). Given the number of episodes and the durations for even- and odd-indexed episodes, the goal is to compute the total duration of the season for multiple test cases.

Steps:
Input Parsing:

First, we take the input for the number of test cases, T.
For each test case, we are given three integers:
N - the total number of episodes.
A - the duration (in minutes) of even-indexed episodes.
B - the duration (in minutes) of odd-indexed episodes.
Logic:

To solve the problem, we calculate how many episodes are odd-indexed and how many are even-indexed:
Odd-indexed episodes: There are (N + 1) // 2 episodes that are odd-indexed.
Even-indexed episodes: There are N // 2 episodes that are even-indexed.
The total duration is then computed as:
Total Duration
=
(Odd Episodes×𝐵)+(Even Episodes×𝐴)
Total Duration=(Odd Episodes×B)+(Even Episodes×A)
Output:

For each test case, we output the total duration of the season.
Example:
For a test case with N = 4, A = 20, and B = 30:

There are 2 odd-indexed episodes and 2 even-indexed episodes.
The total duration will be:
(2×30)+(2×20)=60+40=100 minutes
Thus, the output for this test case is 100.

Complexity:
Time complexity: O(T), where T is the number of test cases, as we are processing each test case independently.
Space complexity: O(1), as we are only using a constant amount of extra space for each test case.
