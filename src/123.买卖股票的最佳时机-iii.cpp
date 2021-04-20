/*
 * @lc app=leetcode.cn id=123 lang=cpp
 *
 * [123] 买卖股票的最佳时机 III
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1 = -prices[0], buy2 = -prices[0];
        int sell1 = 0, sell2 = 0;
        for(auto i:prices) {
            buy1 = max(buy1, -i);
            sell1 = max(sell1, buy1+i);
            buy2 = max(buy2, sell1-i);
            sell2 = max(sell2, buy2+i);
        }
        return sell2;
    }
};
// @lc code=end

