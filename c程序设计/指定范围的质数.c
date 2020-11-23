/*************************************************************************
	> File Name: 指定范围的质数.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:17:04 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>



int n = 1000000;

int mark[1000001];



int main() {

    int c, j;

    int n, m;

    memset(mark, 0, sizeof(mark));

    mark[0] = 1;

    mark[1] = 1;

    scanf("%d%d", &n, &m);

    for (c = 2; c * c <= n; c++) {

        if (!mark[c]) {

            for (j = c * c; j <= n; j += c) {

                mark[j] = 1;

            }

        }

    }

    for (c = 2; c <= n; c++) {

        if (mark[c] != 0 || c < m) {

            continue;

        }

        printf("%d\n", c);

    }

    return 0;

}
