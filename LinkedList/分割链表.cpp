/* 
���ڣ�2020/04/11 
���ߣ������
˵������λԪ�أ����ȴ����һ���ڵ����ݴ���x�������ʹ���һ��Ԫ��С��x 
���ӣ�https://leetcode-cn.com/problems/partition-list/ 
�Ѷȣ�# # 
*/
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head) return head; // �п�

        ListNode *a, *b, *p, *q;
        
        if(head->val >= x) // ����ʹ��һ��Ԫ��С��x
        {
            a = head;
            p = head;
            b = p -> next;
            while(b && b->val >= x)
            {
                p = b; b = b-> next;
            }
            if(b) // b��Ϊ��
            {
                p -> next = b -> next;
                b -> next = a;
                head = b;
            }
            else return head;
        }

        a = head; p = a -> next;
        while(p && p->val < x) // Ѱ�ҵ�һ�����ڵ���x��λ��
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
                // ����λ��
                b -> next = q -> next;
                a -> next = q;
                q -> next = p;
                // �޸�ָ�벼��
                a = q;
                q = b -> next;
            }
        }
        return head;
    }
};
