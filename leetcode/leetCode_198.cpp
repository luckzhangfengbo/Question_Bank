/*************************************************************************
	> File Name: leetCode_198.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  9/15 15:34:09 2020
 ************************************************************************/
//dp[i] 表示前 i 间房屋可以偷到的最高金额，

//那么 dp = max(dp[i - 1], dp[i - 2] + nums[i])，这个会简便一些


class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        //先列举几种情况
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[n - 1];
    }
};

