/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while(x != 0){
            result = result*10 + x%10;
            x /= 10;
        }
        if(result & 0x10000){
            return 0;
        }
        return result;
    }
};
// @lc code=end

