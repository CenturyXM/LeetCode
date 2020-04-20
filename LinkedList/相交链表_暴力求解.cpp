/* 
���ڣ�2020/04/09
���ߣ������
˵��������ѭ��������ÿ���ڵ㣬�ж��Ƿ���� 
���ӣ�https://leetcode-cn.com/problems/intersection-of-two-linked-lists/ 
�Ѷȣ�# 
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
