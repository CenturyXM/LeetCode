/*
���ڣ�2020/04/11 
���ߣ������
˵������Ҫunordered_map
���ӣ� https://leetcode-cn.com/problems/fu-za-lian-biao-de-fu-zhi-lcof/
�Ѷȣ�# # # 
*/ 
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *p;
        unordered_map<Node*,Node*>mp;
        for(p = head; p; p = p -> next) // ԭ������������һһ������ϵ 
            mp[p] = new Node(p->val);
        for(p = head; p; p = p-> next)
        {
            if(p->next) mp[p]->next = mp[p->next];
            if(p->random) mp[p]->random = mp[p->random];
        }
        return mp[head];
    }
};
