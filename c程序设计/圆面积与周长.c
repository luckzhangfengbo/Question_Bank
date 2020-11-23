/*************************************************************************
	> File Name: 圆面积与周长.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:09:29 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

#define PI 3.14159

 

int main() {

        double r;

        scanf("%lf", &r);

        printf("%.3lf\n", 2 * PI * r);

        printf("%.3lf\n", PI * pow(r, 2));

        return 0;

 

}
