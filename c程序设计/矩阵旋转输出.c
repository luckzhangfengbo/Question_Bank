/*************************************************************************
	> File Name: 矩阵旋转输出.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:28:25 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main() {

    int matrix[3][3];

    int i, j;

    int n = 3;

    // 读入数据

    for (i = 0; i < n; ++i) {

        for (j = 0; j < n; ++j) {

            scanf("%d", &matrix[i][j]);

        }

    }

    // 旋转矩阵

    int first, last, temp, offset;

    for (i = 0; i < n / 2; ++i) {

        first = i;

        last = n - 1 - first;

        for (j = first; j < last; ++j) {

            offset = j - first;

            temp = matrix[i][j];

            matrix[i][j] = matrix[last - offset][first];

            matrix[last - offset][first] = matrix[last][last - offset];

            matrix[last][last - offset] = matrix[i + offset][last];

            matrix[i + offset][last] = temp;

        }

    }

    // 输出结果

    for (i = 0; i < n; ++i) {

        printf("%d", matrix[i][0]);

        for (j = 1; j < n; ++j) {

            printf(" %d", matrix[i][j]);

        }

        printf("\n");

    }

    return 0;

}
