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
    ListNode* partition(ListNode* head, int x) {
        if(!head) return head; // 判空

        ListNode *a, *b, *p, *q;
        
        if(head->val >= x) // 调整使第一个元素小于x
        {
            a = head;
            p = head;
            b = p -> next;
            while(b && b->val >= x)
            {
                p = b; b = b-> next;
            }
            if(b) // b不为空
            {
                p -> next = b -> next;
                b -> next = a;
                head = b;
            }
            else return head;
        }

        a = head; p = a -> next;
        while(p && p->val < x) // 寻找第一个大于等于x的位置
        {
            a = p; p = p -> next;
        }
        if(!p) return head;
        b = p; q = p -> next;
        while(q)
        {
            while(q && q->val >= x)
            {
                b = q; q = q -> next;
            }
            if(q)
            {
                // 调整位置
                b -> next = q -> next;
                a -> next = q;
                q -> next = p;
                // 修改指针布局
                a = q;
                q = b -> next;
            }
        }
        return head;
    }
};
