/* 
���ڣ�2020/04/13
���ߣ������
˵����ÿ�δ�lists���ҵ���Сֵ�ڵ㣬�ҵ���Ը�λ��ָ�����һλ��������һ����Сֵ������lists�� 
���ӣ�https://leetcode-cn.com/problems/merge-k-sorted-lists 
�Ѷȣ�# # # 
*/ 

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head, *p;
        int minval, ind;		 			  // ind��¼lists�е���Сֵ�ڵ��λ�ã�������ָ����λ���� 
        head = new ListNode(0); p = head;     // ͷ�ڵ㣬û��ʵ�����壬�������head->next 
        while(true) 
        {
            minval = 0x7fffffff; 			  // int�����ֵ 
            for(int i=0; i<lists.size(); i++) // Ѱ��lists�е���Сֵ 
            {
                if(lists[i] && lists[i]->val < minval)
                {
                    minval = lists[i] -> val; 
                    ind = i;
                }
            }
            if(minval == 0x7fffffff) break;   // listsȫΪ�գ�˵���������� 
            lists[ind] = lists[ind] -> next;  // ��Сֵλ��ָ�����һλ 
            
            p -> next = new ListNode(minval); // �����ϲ������� 
            p = p -> next;
        }
        return head->next;
    }
};
