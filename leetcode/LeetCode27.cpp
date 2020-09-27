/*************************************************************************
	> File Name: LeetCode27.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年03月03日 星期二 07时53分11秒
 ************************************************************************/




int removeElement(int* nums, int numsSize, int val){
        int i = 0, j ;
        for (int j= 0 ;j < numsSize ;j++) {
                if (nums[j] - val) {
                        nums[i++] = nums[j];
                }
        }
        return i;
}


