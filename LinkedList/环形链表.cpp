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
        while(q && q->next && q->next->next) //顺序不能变，q为真那么才会有q->next，否则如果p为空那么p->next就会报错
        {
            if(p == q) return true;
            p = p -> next;
            q = q -> next -> next;
        }
        return false;
    }
};
