/*************************************************************************
	> File Name: 输出最长大的名字.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:34:05 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#include <string.h>



int main() {

    int i, n, len, j;

    scanf("%d\n", &n);

    char str[101], longest_name[101];

    len = 0;

    for (i = 0; i < n; ++i) {

        j = 0;

        while (scanf("%c", &str[j])) {

            if (str[j++] == '\n') {

                str[j] = '\0';

                break;

            }

        }

        if (strlen(str) > len) {

            strcpy(longest_name, str);

            len = strlen(str);

        }

    }

    printf("%s\n", longest_name);

    return 0;

}
