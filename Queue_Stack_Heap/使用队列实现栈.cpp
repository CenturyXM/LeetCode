/*
���ڣ�2020/04/15
���ߣ������
���ӣ�https://leetcode-cn.com/problems/implement-stack-using-queues/
˵�������еĶ��׿���ջ��ջ����ÿ�ζ����ڶ�β����Ԫ�غ���ǰ�������Ԫ�ؿ���������沢ɾ��ǰ���Ԫ�� 
*/

class MyStack {
public:

    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
        for(int i=0; i<q.size()-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }
    
    /** Get the top element. */
    int top() {
        return q.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
    
    private:
        queue<int>q;
};

