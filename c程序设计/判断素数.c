/*************************************************************************
	> File Name: 判断素数.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:13:09 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main() {

    int num;

    int div, flag;

    scanf("%d", &num);

    flag = 1;

    for (div = 2; div * div <= num; ++div) {

        if (num % div == 0) {

            flag = 0;

            break;

        }

    }

    printf("%s", flag ? "YES" : "NO");

    return 0;

}

 
