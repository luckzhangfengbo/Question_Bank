/*************************************************************************
	> File Name: 矩阵乘法.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:31:53 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
 

int main() {

    int matrix_a[10][10];

    int matrix_b[10][10];

    int m, n;

    int i, j, k;

    scanf("%d%d", &m, &n);

    for (i = 0; i < m; ++i) {

        for (j = 0; j < n; ++j) {

            scanf("%d", &matrix_a[i][j]);

        }

    }

    for (i = 0; i < n; ++i) {

        for (j = 0; j < m; ++j) {

            scanf("%d", &matrix_b[i][j]);

        }

    }

    int sum;

    for (i = 0; i < m; ++i) {

        for (j = 0; j < m; ++j) {

            sum = 0;

            for (k = 0; k < n; ++k) {

                sum += matrix_a[i][k] * matrix_b[k][j];

            }

            printf("%d", sum);

            if (j != m - 1) printf(" ");

        }

        printf("\n");

    }

    return 0;

}
