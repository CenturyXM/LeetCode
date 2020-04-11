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
