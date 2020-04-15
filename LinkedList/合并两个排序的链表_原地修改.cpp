/*
���ڣ�2020/04/12
���ߣ������
˵����ԭ���޸ģ����迼������һ��ָ���ȷſյ������
���ӣ�https://leetcode-cn.com/problems/he-bing-liang-ge-pai-xu-de-lian-biao-lcof/ 
�Ѷȣ�# 
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && l2) return l2;
        if(!l2 && l1) return l1;
        if(!l1 && !l2) return l1;
        ListNode *p, *q, *s;
        p = l1; q = l2;
        while(p && q) // ����һ���ſվͿ����˳��� 
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
        // ��l1->val=l2->valʱһ���Ƿ���l1 
    }
};
