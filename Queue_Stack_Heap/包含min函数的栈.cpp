/*
日期：2020/04/16
作者：孟庆国
链接：https://leetcode-cn.com/problems/bao-han-minhan-shu-de-zhan-lcof/
说明：设法维护好栈s2的元素，使其保持非严格降序，即可实现 min()函数的O(1)复杂度。 
*/

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        s1.push(x);
        if(s2.empty() || s2.top()>=x)
            s2.push(x);
    }
    
    void pop() {
        if(s1.top() == s2.top())
        {
            s1.pop();
            s2.pop();
        }
        else s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int min() {
        return s2.top();
    }

    private:
        stack<int>s1;
        stack<int>s2;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
