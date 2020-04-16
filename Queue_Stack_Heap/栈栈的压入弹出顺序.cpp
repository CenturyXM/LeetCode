/*
���ڣ�2020/04/16
���ߣ������
���ӣ�https://leetcode-cn.com/problems/zhan-de-ya-ru-dan-chu-xu-lie-lcof/
˵��������pushed˳��ѹջ��ѹջʱ�ж��Ƿ���ѹ���ֱ�Ӿ͵�������������ֱ��ѹ�룬����ѹ�벢���ǰ�ж��Ƿ񻹴��ڵ�����������ѹ����֮�����s��Ϊ�������ε���Ԫ�أ��жϵ���Ԫ�ص�˳���Ƿ�Ϸ� 
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
