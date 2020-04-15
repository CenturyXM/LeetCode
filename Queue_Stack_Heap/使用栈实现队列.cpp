/*
日期：2020/04/15
作者：孟庆国
链接：https://leetcode-cn.com/problems/implement-queue-using-stacks/
说明：当访问队列首元素时，需要将是s1中的元素全部倒到s2中，使s2的栈顶元素为原s1的栈底元素，访问结束后需要再将s2中的元素再倒到s1中。s2相当于辅助栈。 
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
