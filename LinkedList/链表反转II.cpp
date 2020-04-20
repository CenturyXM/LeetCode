/*
日期：2020/04/09  
作者：孟庆国 
说明：初始时，q指向m位置，b指向n位置，而s=q->next,p=b->next。
链接：https://leetcode-cn.com/problems/reverse-linked-list-ii/	
难度：# # 
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
        if(mm == 1) return p; // 这里一定是mm而不是m
        s = head;
        mm -= 2;
        while(mm--) s = s -> next;
        s -> next = b;
        return head;

    }
};
