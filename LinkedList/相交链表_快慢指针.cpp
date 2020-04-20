/*
���ڣ�2020/04/09 
���ߣ������ 
˵�����ı�ָ��ָ����һ������ʱע��������������ѭ��������뿴ͬĿ¼�µ�ԭ��ͼ 
���ӣ�https://leetcode-cn.com/problems/intersection-of-two-linked-lists/
�Ѷȣ�# 
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
