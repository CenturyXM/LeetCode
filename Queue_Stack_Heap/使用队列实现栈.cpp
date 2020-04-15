/*
日期：2020/04/15
作者：孟庆国
链接：https://leetcode-cn.com/problems/implement-stack-using-queues/
说明：队列的队首看作栈的栈顶，每次队列在队尾加入元素后将其前面的所有元素拷贝到其后面并删除前面的元素 
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

