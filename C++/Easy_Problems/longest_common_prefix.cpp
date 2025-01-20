/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.


*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Edge case: If the array is empty, return an empty string
        if (strs.empty()) return "";

        // Start with the first string as the prefix
        string prefix = strs[0];

        // Compare this prefix with every string in the array
        for (int i = 1; i < strs.size(); i++) {
            // Reduce the prefix until it matches the start of the current string
            while (strs[i].find(prefix) != 0) { // `find` checks if prefix is at the start
                prefix = prefix.substr(0, prefix.length() - 1); // Shorten the prefix
                if (prefix.empty()) return ""; // If no common prefix, return ""
            }
        }
        return prefix;
    }
};
