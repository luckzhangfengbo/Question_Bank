/*************************************************************************
	> File Name: n阶数字三角形.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:15:20 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main() {

    int n;

    int i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {

        printf("%d", i);

        for (j = 2; j <= n - i + 1; ++j) {

            printf(" %d", i);

        }

        printf("\n");

    }

    return 0;

}
