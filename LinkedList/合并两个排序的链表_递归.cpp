/*
日期：2020/04/13
作者：孟庆国
说明：递归思想，简单好理解
链接：https://leetcode-cn.com/problems/merge-two-sorted-lists/ 
难度：# 
*/ 

class Solution {
public:
    ListNode* merge(ListNode* la, ListNode* lb)
    {
        if(!la) return lb;
        if(!lb) return la;
        if(la->val <= lb->val)
        {
            la->next = merge(la->next, lb);
            return la;
        }
        else
        {
            lb->next = merge(la, lb->next);
            return lb;
        }
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        return merge(l1, l2);
    }
};
