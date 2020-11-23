/*************************************************************************
	> File Name: 点在矩形内.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:35:45 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#include <math.h>



struct point {

    int x;

    int y;

};

struct rectangle {

    struct point p1;

    struct point p2;

};



int main() {

    struct point p1;

    struct rectangle rect;

    scanf("%d%d", &p1.x, &p1.y);

    scanf("%d%d%d%d", &rect.p1.x, &rect.p1.y, &rect.p2.x, &rect.p2.y);

    if ((rect.p1.x - p1.x) * (rect.p2.x - p1.x) <= 0 &&

        (rect.p1.y - p1.y) * (rect.p2.y - p1.y) <= 0) {

        printf("YES\n");

    } else {

        printf("NO\n");

    }

    return 0;

}
