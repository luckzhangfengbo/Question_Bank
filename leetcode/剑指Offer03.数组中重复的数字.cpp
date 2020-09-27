/*************************************************************************
	> File Name: 剑指Offer03.数组中重复的数字.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  9/15 16:23:38 2020
 ************************************************************************/
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (nums[i] == nums[i + 1]) return nums[i];
        }
        return -1;
    }
};
