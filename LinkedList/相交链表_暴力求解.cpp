/* 
日期：2020/04/09
作者：孟庆国
说明：两层循环，遍历每个节点，判断是否相等 
链接：https://leetcode-cn.com/problems/intersection-of-two-linked-lists/ 
难度：# 
*/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p, *q;
        p = headA;
        while(p)
        {
            q = headB;
            while(q)
            {
                if(p == q)
                    return p;
                q = q -> next;
            }
            p = p -> next;
        }
        return NULL;
    }
};
