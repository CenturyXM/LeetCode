/*
���ڣ�2020/04/09  
���ߣ������ 
˵������ʼʱ��qָ��mλ�ã�bָ��nλ�ã���s=q->next,p=b->next��
���ӣ�https://leetcode-cn.com/problems/reverse-linked-list-ii/	
�Ѷȣ�# # 
*/

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(!head || n==m) return head;
        ListNode *p, *q, *s, *b;
        int mm = m;
        q = head; p = head;
        m--; n--;
        while(m--) q = q -> next;
        while(n--) p = p -> next;
        s = q -> next; b = p; p = p -> next;
        while(p != b)
        {
            q -> next = p;
            p = q; q = s;
            s = s ? s -> next : s;
        }
        if(mm == 1) return p; // ����һ����mm������m
        s = head;
        mm -= 2;
        while(mm--) s = s -> next;
        s -> next = b;
        return head;

    }
};
