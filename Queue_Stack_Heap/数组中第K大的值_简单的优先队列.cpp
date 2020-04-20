/*
���ڣ�2020/04/18
���ߣ������
˵�������ȶ���
���ӣ�https://leetcode-cn.com/problems/kth-largest-element-in-an-array/ 
*/ 

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size() == 0 || k > nums.size()) 
            return -1;
            
        priority_queue<int>pq;
        for(int i=0; i<nums.size(); i++)
            pq.push(nums[i]);
            
        int res;
        while(k--)
        {
            res = pq.top();
            pq.pop();
        }
        return res;
    }
};
