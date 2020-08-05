/* 

Given an array nums and a value val, remove all instances of that value in-place and return the new length.

*/

class Solution {
public:
  int removeElement(vector<int>& nums, int val) {
    return std::distance(nums.begin(), std::remove(nums.begin(), nums.end(), val));
  }
};
