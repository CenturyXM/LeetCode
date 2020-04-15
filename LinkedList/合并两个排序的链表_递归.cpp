/*
���ڣ�2020/04/13
���ߣ������
˵�����ݹ�˼�룬�򵥺����
���ӣ�https://leetcode-cn.com/problems/merge-two-sorted-lists/ 
�Ѷȣ�# 
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
