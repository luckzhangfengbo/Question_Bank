/*************************************************************************
	> File Name: Leetcode-283.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 16时31分37秒
 ************************************************************************/


 void moveZeroes(int* nums, int numsSize){
        int count=0;
        for(int i=0;i<numsSize;i++)
                if(nums[i]!=0)
                {
                nums[count]=nums[i];
                if(count!=i)
                        nums[i]=0;
                count++;
                }
}
