/*************************************************************************
	> File Name: 排序名单.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:32:59 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

 

char names[10][21];

 

int main() {

    int m, i, j;

    // 读入名字数据

    for (i = 0; i < 10; ++i) {

        scanf("%s", names[i]);

    }

    // 使用选择排序对名字数组进行排序

    char temp[21];

    for (i = 0; i < 10; ++i) {

        m = i;

        for (j = i + 1; j < 10; ++j) {

            if (strcmp(names[m], names[j]) > 0) {

                m = j;

            }

        }

        strcpy(temp, names[i]);

        strcpy(names[i], names[m]);

        strcpy(names[m], temp);

    }

    for (i = 0; i < 10; ++i) {

        printf("%s\n", names[i]);

    }

    return 0;

}
