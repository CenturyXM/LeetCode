/*
日期：2020/04/09 
作者：孟庆国 
说明：改变指针指向另一个链表时注意条件，避免死循环。详解请看同目录下的原理图 
链接：https://leetcode-cn.com/problems/intersection-of-two-linked-lists/
难度：# 
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
