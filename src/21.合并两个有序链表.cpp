/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1 == nullptr)
            return l2;
        if(l2 == nullptr)
            return l1;

        ListNode* res(nullptr);
        ListNode* ptr;
        while(true){
            if(l1->val < l2->val){
                if(res == nullptr){
                    res = new ListNode(l1->val);
                    ptr = res;
                }else{
                    auto temp = new ListNode(l1->val);
                    ptr->next = temp;
                    ptr = ptr->next;
                }
                if(l1->next == nullptr){
                    ptr->next = l2;
                    return res;
                }
                else{
                    l1 = l1->next;
                }
            }else{
                if(res == nullptr){
                    res = new ListNode(l2->val);
                    ptr = res;
                }else{
                    auto temp = new ListNode(l2->val);
                    ptr->next = temp;
                    ptr = ptr->next;
                }
                if(l2->next == nullptr){
                    ptr->next = l1;
                    return res;
                }
                else{
                    l2 = l2->next;
                }
            }
        }
    }
};
// @lc code=end

