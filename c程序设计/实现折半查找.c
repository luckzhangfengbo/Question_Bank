/*************************************************************************
	> File Name: 实现折半查找.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:23:02 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int find_number(int, int *, int);

 

int main() {

    int n, k ,m;

    int numbers[1000001];

    int i, j;

    // 反复读入数字和查找数字的数量

    while (scanf("%d%d", &n, &k) != EOF) {

        // 读入给定的数字

        for (i = 1; i <= n; i++) {

            scanf("%d", &numbers[i]);

        }

        for (j = 0; j < k; j++) {

            // 读入待查找的数字，

            scanf("%d", &m);

            // 请在下面完成查找读入数字的功能

            printf("%d", find_number(m, numbers, n));

            if (j < k - 1) {

                printf(" ");

            }

        }

    }

    return 0;

}

 

int find_number(int m, int *nums, int n) {

    int head = 1, tail = n, mid;

    while (head <= tail) {

        mid = (head + tail) / 2;

        if (nums[mid] == m) {

            return mid;

        } else if (nums[mid] < m) {

            head = mid + 1;

        } else {

            tail = mid - 1;

        }

    }

    return 0;

}
