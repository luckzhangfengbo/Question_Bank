/*************************************************************************
	> File Name: 二分法求方程近似解.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:16:42 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

#define EPSILON 1e-7

 

double bisection(int p, int q, double (*func)(int, int, double));

double f(int p, int q, double x);

int main() {

    int p;

    int q;

    scanf("%d%d", &p, &q);

    printf("%.4f\n", bisection(p, q, f));

    return 0;

}

 

double bisection(int p, int q, double (*func)(int, int, double)) {

    double xmin, xmax, xmid;

    double value_min, value_max, value_mid;

    xmin = -1000;

    xmax = 1000;

    value_min = func(p, q, xmin);

    value_max = func(p, q, xmax);

    do {

        xmid = (xmin + xmax) / 2;

        value_mid = func(p, q, xmid);

        if (fabs(value_mid) < EPSILON) {

            return xmid;

        } else if (value_mid * value_min < 0.0) {

            xmax = xmid;

            value_max = value_mid;

        } else if (value_mid * value_max < 0.0) {

            xmin = xmid;

            value_min = value_mid;

        } else {

            printf("ERROR");

        }

    } while (1);

    return xmin;

}

 

double f(int p, int q, double x) {

    return p * x + q;

}
