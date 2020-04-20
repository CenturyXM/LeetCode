/* 
日期：2020/04/11 
作者：孟庆国
说明：定位元素，首先处理第一个节点数据大于x的情况，使其第一个元素小于x 
链接：https://leetcode-cn.com/problems/partition-list/ 
难度：# # 
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
