/*************************************************************************
	> File Name: leetCode-239.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六  1/ 2 16:18:28 2021
 ************************************************************************/
 
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        // 如果大小小于2
        if(nums.size() < 2){
            return nums;
        }
        // 定义双端队列
        deque<int> q;
        for(int i = 0 ; i < nums.size(); i ++){
            // 如果不为空且是超过了框框范围
            if(!q.empty() && q.front() == i - k){
                q.pop_front();
            }
            // 如果不为空且输入的元素大于末尾，弹出最后的下标
            while(!q.empty() && nums[i] > nums[q.back()]){
                q.pop_back();
            }
            // 将新元素加入
            q.push_back(i);
            if(i >= k - 1) res.push_back(nums[q.front()]);
        }
        return res;
    }
};

