/*
日期：2020/04/20
作者：孟庆国
链接：https://leetcode-cn.com/problems/kth-largest-element-in-an-array/
说明：维持一个大小为k的小项堆，最终返回堆顶元素
*/ 

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size() == 0 || k > nums.size()) 
            return -1;
        
        // 小项堆
        priority_queue<int,vector<int>,greater<int> >pq;
        for(int i=0; i<nums.size(); i++)
        {
            if(pq.size() < k) pq.push(nums[i]);
            else
            {
                if(nums[i] > pq.top())
                {
                    pq.pop();
                    pq.push(nums[i]);
                }
            }
        }
        return pq.top();
    }
};
