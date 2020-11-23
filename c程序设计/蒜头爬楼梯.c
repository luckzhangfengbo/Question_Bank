/*************************************************************************
	> File Name: 蒜头爬楼梯.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:23:45 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main() {

    int n, i;

    int nums[51];

    scanf("%d", &n);

    nums[0] = 1; nums[1] = 0;

    nums[2] = 1; nums[3] = 1;

    for (i = 4; i <= n; ++i) {

        nums[i] = nums[i - 2] + nums[i - 3];

    }

    printf("%d\n", nums[n]);

    return 0;

}
