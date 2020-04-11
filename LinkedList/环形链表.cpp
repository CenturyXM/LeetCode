/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
        if(head == head->next) return true;
        ListNode *p, *q;
        p = head; q = p->next;
        while(q && q->next && q->next->next) //˳���ܱ䣬qΪ����ô�Ż���q->next���������pΪ����ôp->next�ͻᱨ��
        {
            if(p == q) return true;
            p = p -> next;
            q = q -> next -> next;
        }
        return false;
    }
};
