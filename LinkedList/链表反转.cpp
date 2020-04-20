/* 
���ڣ�2020/04/08 
���ߣ������
˵����ԭ�ط�ת���ռ�O(1) 
���ӣ�https://leetcode-cn.com/problems/reverse-linked-list/ 
�Ѷȣ�# 
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
