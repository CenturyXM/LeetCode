/*
日期：2020/04/12
作者：孟庆国
说明：原地修改，无需考虑其中一个指针先放空的情况下
链接：https://leetcode-cn.com/problems/he-bing-liang-ge-pai-xu-de-lian-biao-lcof/ 
难度：# 
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && l2) return l2;
        if(!l2 && l1) return l1;
        if(!l1 && !l2) return l1;
        ListNode *p, *q, *s;
        p = l1; q = l2;
        while(p && q) // 任意一个放空就可以退出了 
        {
            if(p->val <= q->val)
            {
                s = p -> next;
                while(s && s->val <= q->val)
                {
                    p = s; s = s -> next;
                }
                p -> next = q; p = s;
            }
            else
            {
                s = q -> next;
                while(s && s->val <= p->val)
                {
                    q = s; s = s -> next;
                }
                q -> next = p; q = s;
            }
        }
        return (l1->val <= l2->val) ? l1 : l2;
        // 当l1->val=l2->val时一定是返回l1 
    }
};
