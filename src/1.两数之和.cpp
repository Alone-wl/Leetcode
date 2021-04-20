/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> temp;
        for(int i = 0; i < nums.size(); i++){
            temp.insert(pair<int, int>(nums[i], i));
        }
        for(int i = 0; i < nums.size(); i++){
            if(temp.count(target-nums[i]) > 0 && temp[target-nums[i]] != i){
                if(temp[target-nums[i]]<i){
                    result.push_back(temp[target-nums[i]]);
                    result.push_back(i);
                }else{                 
                    result.push_back(i);
                    result.push_back(temp[target-nums[i]]);
                }

                break;
            }
        }
        return result;
    }
};
// @lc code=end

