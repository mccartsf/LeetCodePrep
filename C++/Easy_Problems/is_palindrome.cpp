/*

Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

*/
#include <string>

using std::string;

class Solution {
public:
    bool isPalindrome(int x) {
       //Make sure the number is not negative 
       if (x < 0 || (x % 10 == 0 && x != 0)) {

            return false;
       } 

       //Reverse Half  
       int reverseHalf = 0;
       while(x > reverseHalf) {

        reverseHalf = reverseHalf * 10 + x % 10;
        x/=10;

       }
       return x == reverseHalf || x == reverseHalf / 10;

    }
};