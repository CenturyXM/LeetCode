// Ô­µØÄæĞò
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
