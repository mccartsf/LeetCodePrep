#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;
/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/

// class Solution {
// //Brute Force
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> result;
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[i] + nums[j] == target) {
//                     result.push_back(i); 
//                     result.push_back(j);
//                     return result; 
//                 }
//             }
//         }
//         return result; 
//     }
// };

// class Solution {
// //Brute Force (revision for better speed)
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for (int i = 0; i < nums.size(); i++) {

//             for (int j = i + 1; j < nums.size(); j++) {

//                 if (nums[i] + nums[j] == target) {

//                     return {i,j};
//                 }
//             }
//         }
//         return {}; 
//     }
// };

class Solution {
//Unordered Map 
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> hMap;
        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            if (hMap.find(complement) != hMap.end()) {
                
                return {hMap[complement], i};
            }

            hMap[nums[i]] = i;
        }
        return {}; 
    }
        
};


