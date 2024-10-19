# Second Largest Element Finder

This program finds the second largest element from three given numbers using two different approaches. The solution is implemented in C++ and handles multiple test cases in a single run.

## Approach 1: Sorting Method
- The input numbers are stored in a vector and sorted using `std::sort`.
- After sorting, the second element (at index 1) in the sorted vector is printed as the second largest number.
- This approach is easy to implement and leverages sorting but has a time complexity of \(O(n \log n)\).

## Approach 2: Max Comparison Method
- The maximum number among the three is found by direct comparison.
- The second largest number is determined by comparing the two remaining numbers that are not equal to the maximum.
- This approach has a time complexity of \(O(1)\), making it more efficient than the sorting method for small inputs like this.


