/*
���ڣ�2020/04/20
���ߣ������
���ӣ�https://leetcode-cn.com/problems/kth-largest-element-in-an-array/
˵����ά��һ����СΪk��С��ѣ����շ��ضѶ�Ԫ��
*/ 

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size() == 0 || k > nums.size()) 
            return -1;
        
        // С���
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
