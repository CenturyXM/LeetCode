/*
日期：2020/04/11 
作者：孟庆国
说明：需要unordered_map
链接： https://leetcode-cn.com/problems/fu-za-lian-biao-de-fu-zhi-lcof/
难度：# # # 
*/ 
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *p;
        unordered_map<Node*,Node*>mp;
        for(p = head; p; p = p -> next) // 原链表与新链表一一建立联系 
            mp[p] = new Node(p->val);
        for(p = head; p; p = p-> next)
        {
            if(p->next) mp[p]->next = mp[p->next];
            if(p->random) mp[p]->random = mp[p->random];
        }
        return mp[head];
    }
};
