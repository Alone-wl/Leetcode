/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == nullptr)
            return head;

        auto slow = head;
        ListNode* fast;
        if(slow->next == nullptr){
            return head;
        }else{
            fast = slow->next;
        }
        
        while(fast != nullptr) {
            if(fast->val == slow->val) {
                slow->next = fast->next;
                delete fast;
                if(slow->next != nullptr)
                    fast = slow->next;
                else
                    return head;
            }else{
                slow = fast;
                fast = fast->next;
            }
        }
        return head;
    }
};
// @lc code=end

