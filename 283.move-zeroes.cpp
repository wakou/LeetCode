/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        int index = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                nums[index++] = nums[i];
            }
        }
        for(int i = index; i < nums.size(); i++)
            nums[i] = 0;
    }
};
// @lc code=end

