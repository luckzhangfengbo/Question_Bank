/*************************************************************************
	> File Name: n阶递减三角形.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:15:43 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main() {

    int n;

    int i, j;

    scanf("%d", &n);

    for (i = n; i >= 1; --i) {

        printf("%d", i);

        for (j = i - 1; j >= 1; --j) {

            printf(" %d", j);

        }

        printf("\n");

    }

    return 0;

}
