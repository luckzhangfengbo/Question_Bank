/*************************************************************************
	> File Name: 矩阵翻转输出.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:24:47 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main() {

    int matrix[100][100];

    int m, n, k, i, j;

    scanf("%d%d", &m ,&n);

    // 读入矩阵数据

    for (i = 0; i < m; ++i) {

        for (j = 0; j < n; ++j) {

            scanf("%d", &matrix[i][j]);

        }

    }

    scanf("%d", &k); // 读入翻转方向

    switch (k) {

            // 竖直翻转

        case 0: {

            int temp;

            for (i = 0; i < m / 2; ++i) {

                for (j = 0; j < n; ++j) {

                    temp = matrix[i][j];

                    matrix[i][j] = matrix[m - i - 1][j];

                    matrix[m - i - 1][j] = temp;

                }

            }

        } break;

            // 水平翻转

        case 1: {

            int temp;

            for (i = 0; i < m; ++i) {

                for (j = 0; j < n / 2; ++j) {

                    temp = matrix[i][j];

                    matrix[i][j] = matrix[i][n - j - 1];

                    matrix[i][n - j - 1] = temp;

                }

            }

        } break;

        default:

            printf("ERROR\n");

            break;

    }

    

    for (i = 0; i < m; ++i) {

        printf("%d", matrix[i][0]);

        for (j = 1; j < n; ++j) {

            printf(" %d", matrix[i][j]);

        }

        printf("\n");

    }

    return 0;

}
