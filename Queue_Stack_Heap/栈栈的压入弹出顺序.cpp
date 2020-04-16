/*
日期：2020/04/16
作者：孟庆国
链接：https://leetcode-cn.com/problems/zhan-de-ya-ru-dan-chu-xu-lie-lcof/
说明：按照pushed顺序压栈，压栈时判断是否是压入后直接就弹出，若不是则直接压入，否则不压入并向后前判断是否还存在弹出操作。当压入完之后，如果s不为空则依次弹出元素，判断弹出元素的顺序是否合法 
*/

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int i = 0, j = 0;
        for(i; i<pushed.size(); i++)
        {
            if(pushed[i] == popped[j])
            {
                j++;
                while(!s.empty() && s.top() == popped[j])
                {
                    j++; s.pop();
                }
            }
            else 
                s.push(pushed[i]);
        }
        while(!s.empty())
        {
            if(s.top() == popped[j++])
                s.pop();
            else return false;
        }
        return true;
    }
}; 
