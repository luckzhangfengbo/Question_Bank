/*************************************************************************
	> File Name: Leetcode-287.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月27日 星期四 17时41分12秒
 ************************************************************************/
int findDuplicate(int* nums, int numsSize){
    int tmp;
    for (int i = 0; i < numsSize; i++) {
        tmp = nums[i] > 0 ? nums[i] : -nums[i];
        if ( nums[tmp-1] < 0 ) 
        {
            return tmp;
        }
        nums[tmp-1] *= -1;
    }

    return -1;
}
/*
 * int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do {
        p = nums[p];
        q = nums[nums[q]];
    } while (p != q);
    q = nums[0];
    while (p != q) {
        p = nums[p];
        q = nums[q];
    }
    return p;
}*/
