/*************************************************************************
	> File Name: 权限修改.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:34:35 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int get_value(char c) {

    switch (c) {

        case 'r':

            return 4;

        case 'w':

            return 2;

        case 'x':

            return 1;

        default:

            printf("ERROR\n");

    }

    return 0;

}



int main() {

    int i, len, value;

    char str[10];

    scanf("%s", str);

    value = 0;

    len = strlen(str);

    for (i = 0; i < len; ++i) {

        value |= get_value(str[i]);

    }

    while (scanf("%s", str) != EOF) {

        switch (str[0]) {

            case '+':

                value |= get_value(str[1]);

                break;

            case '-':

                value &= ~get_value(str[1]);

                break;

            default:

                printf("ERROR\n");

        }

    }

    printf("%d\n", value);

    return 0;

}
