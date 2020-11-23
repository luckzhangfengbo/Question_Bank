/*************************************************************************
	> File Name: 小于指定值的素数.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:13:27 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main() {

    int num;

    int div, flag, n;

    scanf("%d", &num);

    for (n = 2; n <= num; n += 2 + (n % 2 - 1)) {

        flag = 1;

        for (div = 2; div * div <= n; ++div) {

            if (n % div == 0) {

                flag = 0;

                break;

            }

        }

        if (flag) {

            printf("%d\n", n);

        }

    }

    return 0;

}
