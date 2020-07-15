/*

Pow(x, n)

Solution
Implement pow(x, n), which calculates x raised to the power n (xn).

Example 1:

Input: 2.00000, 10
Output: 1024.00000
Example 2:

Input: 2.10000, 3
Output: 9.26100
Example 3:

Input: 2.00000, -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25

*/

class Solution {
  public:
    double myPow(double x, int n) {
      if (n == 0) return 1;    // base condition

      double half = myPow(x, n / 2);   //  hypothesis
      double base = n < 0? 1 / x : x;   // induction step
      /*
      if number is negative then base becomes 1/x and if positive then x
      */
      
      return n % 2 == 0? half * half : half * half * base  ;  // induction step
      /*
      for even number we can only multiple the two halves and make the required power . For odd by multiplying two halves need to multiply with base
      */
    
    }
};
