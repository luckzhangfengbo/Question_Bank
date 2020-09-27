/*************************************************************************
	> File Name: Leetcode-136.c
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月27日 星期四 13时40分42秒
 ************************************************************************/
int singleNumber(int* nums, int numsSize){
    int  ans = 0;
    for(int i = 0 ;i < numsSize ;i++) {
        ans ^= nums[i];
    }
    return ans ;
}
