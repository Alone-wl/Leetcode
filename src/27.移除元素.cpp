/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        if(length == 0){
            return 0;
        }
        int start = 0;
        for(int i = 0; i < length; i++){    
            if(nums[i] != val){
                nums[start] = nums[i];
                start++;
            }
        }
        return start;
    }
};
// @lc code=end

