/*************************************************************************
	> File Name: Leetcode-53.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 16时26分46秒
 ************************************************************************/




int max(int a , int b) {
        return a > b ? a : b;
}

int maxSubArray(int* nums, int numsSize){
        int ans = nums[0];
        int sum = 0;
        for(int i = 0 ;i < numsSize ;i++) {
            if(sum > 0) {
                sum +=  nums[i];
            } else {
                sum = nums[i];
            }
            ans  = max(ans, sum);
        }
        return ans;
    }
