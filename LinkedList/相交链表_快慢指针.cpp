/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(!headA || !headB) return NULL;
    struct ListNode *p, *q, *pp, *qq;
    p = headA; q = headB;
    while(p != q)
    {
        pp = p; qq = q;
        p = (!p -> next && qq -> next) ? headB : p -> next;
        q = (!q -> next && pp -> next) ? headA : q -> next;
    }
    return p;
}
