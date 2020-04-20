/* 
日期：2020/04/13
作者：孟庆国
说明：每次从lists中找到最小值节点，找到后对该位置指针后移一位，这样下一个最小值还是在lists中 
链接：https://leetcode-cn.com/problems/merge-k-sorted-lists 
难度：# # # 
*/ 

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head, *p;
        int minval, ind;		 			  // ind记录lists中的最小值节点的位置，便于做指针移位操作 
        head = new ListNode(0); p = head;     // 头节点，没有实际意义，结果返回head->next 
        while(true) 
        {
            minval = 0x7fffffff; 			  // int的最大值 
            for(int i=0; i<lists.size(); i++) // 寻找lists中的最小值 
            {
                if(lists[i] && lists[i]->val < minval)
                {
                    minval = lists[i] -> val; 
                    ind = i;
                }
            }
            if(minval == 0x7fffffff) break;   // lists全为空，说明遍历结束 
            lists[ind] = lists[ind] -> next;  // 最小值位置指针后移一位 
            
            p -> next = new ListNode(minval); // 建立合并的链表 
            p = p -> next;
        }
        return head->next;
    }
};
