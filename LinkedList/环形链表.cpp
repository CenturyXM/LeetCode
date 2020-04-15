/*
日期：2020/04/09 
作者：孟庆国
说明：快慢指针，注意循环体的条件 
地址：https://leetcode-cn.com/problems/linked-list-cycle/ 
难度：# # 
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
