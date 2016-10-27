/*
Given an integer n, return the largest number that contains exactly n digits.

Example

For n = 2, the output should be
largestNumber(n) = 99.

Input/Output

[time limit] 500ms (cpp)
[input] integer n

Constraints:
1 ≤ n ≤ 7.

[output] integer

The largest integer of length n.
*/

int largestNumber(int n) {
    int result = 0;
    while (n>0) {
        result = result * 10 + 9;
        --n;
    }
    return result;
}
