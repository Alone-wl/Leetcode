/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
	int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for(auto i : prices){
            minPrice = min(minPrice, i);
            maxProfit = max(maxProfit, i-minPrice);
        }
        return maxProfit;
	}
};
// @lc code=end

