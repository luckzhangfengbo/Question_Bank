/*************************************************************************
	> File Name: Leetcode-268.c
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月27日 星期四 12时47分41秒
 ************************************************************************/



int missingNumber(int* nums, int numsSize){
    int *p=(int *)malloc(sizeof(int)*(numsSize+1));
    memset(p,0,sizeof(int)*(numsSize+1));
    int i=0;
    for(i=0;i<numsSize;i++){
        p[nums[i]]=1;
    }
    for(i=0;i<numsSize;i++){
        if(p[i]==0){
            return i;
        }
    }
    return numsSize;
}
