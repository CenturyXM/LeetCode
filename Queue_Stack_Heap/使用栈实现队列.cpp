/*
���ڣ�2020/04/15
���ߣ������
���ӣ�https://leetcode-cn.com/problems/implement-queue-using-stacks/
˵���������ʶ�����Ԫ��ʱ����Ҫ����s1�е�Ԫ��ȫ������s2�У�ʹs2��ջ��Ԫ��Ϊԭs1��ջ��Ԫ�أ����ʽ�������Ҫ�ٽ�s2�е�Ԫ���ٵ���s1�С�s2�൱�ڸ���ջ�� 
*/ 
class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int res;
        while(!s1.empty())
        {
            int val = s1.top();
            s1.pop();
            s2.push(val);
        }
        res = s2.top();
        s2.pop();
        while(!s2.empty())
        {
            int val = s2.top();
            s2.pop();
            s1.push(val);
        }
        return res;
    }
    
    /** Get the front element. */
    int peek() {
        int res;
        while(!s1.empty())
        {
            int val = s1.top();
            s1.pop();
            s2.push(val);
        }
        res = s2.top();
        while(!s2.empty())
        {
            int val = s2.top();
            s2.pop();
            s1.push(val);
        }
        return res;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }

    private:
        stack<int>s1;
        stack<int>s2;
};
