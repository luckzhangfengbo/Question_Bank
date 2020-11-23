/*************************************************************************
	> File Name: 乘法表.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:16:17 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main() {

    int n;

    int i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {

        for (j = i; j <= n; ++j) {

            printf("%d*%d=%d", i, j, i * j);

            if (j != n) {

                printf("\t");

            }

        }

        printf("\n");

    }

    return 0;

}
