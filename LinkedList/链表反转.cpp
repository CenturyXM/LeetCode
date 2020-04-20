/* 
日期：2020/04/08 
作者：孟庆国
说明：原地反转，空间O(1) 
链接：https://leetcode-cn.com/problems/reverse-linked-list/ 
难度：# 
*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode *p, *q, *s;
        p = NULL;
        q = head;
        s = q -> next;
        while(q)
        {
            q -> next = p;
            p = q; 
            q = s; 
            s = s?s->next:s;
        }
        return p;
    }
};
