/*************************************************************************
	> File Name: 日期合法性.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:10:35 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main() {

    int year, month, day, maxDay;

    scanf("%d-%d-%d", &year, &month, &day);

    if (month > 12) {

        printf("NO");

    } else if (month == 1 || month == 3 || month == 5

            || month == 7 || month == 8 || month == 10

            || month == 12) {

        printf("%s", day <= 31 ? "YES" : "NO");

    } else if (month == 4 || month == 6 || month == 9

            || month == 11) {

        printf("%s", day <= 30 ? "YES" : "NO");

    } else {

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {

            maxDay = 29;

        } else {

            maxDay = 28;

        }

        printf("%s", day <= maxDay ? "YES" : "NO");

    }

    return 0;

}


