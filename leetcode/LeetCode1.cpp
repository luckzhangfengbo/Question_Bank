/*************************************************************************
	> File Name: LeetCode1.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 19时13分52秒
 ************************************************************************/


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
        int i , j ;
        int *p = (int *) malloc(sizeof(int) * 1000);
        for (i = 0 ;i < numsSize ;i++) {
                for (j = i + 1 ;j < numsSize ;j++) {
                        if (nums[i] + nums[j] == target) {
                                p[0] = i ;
                                p[1] = j;
                                *returnSize = 2;
                                return p;
                        }
                }
        }
        return 0;
}
