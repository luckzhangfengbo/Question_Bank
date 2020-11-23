/*************************************************************************
	> File Name: 三角形面积与周长.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:08:58 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

 

int main() {

        double a, b, c;

        scanf("%lf%lf", &a, &b);

        c = sqrt(pow(a, 2) + pow(b, 2));

        printf("%.2lf\n", a + b + c);

        printf("%.2lf\n", a * b / 2);

        return 0;

}

 
