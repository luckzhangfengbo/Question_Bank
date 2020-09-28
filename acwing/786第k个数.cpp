/*************************************************************************
	> File Name: 786第k个数.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/28 08:41:05 2020
 ************************************************************************/

#include <iostream>

using namespace std;

const int N = 100010;

int q[N], n, m;

void qsort(int q[], int l, int r) {
    if(l >= r) return ;
    int i = l - 1, j = r + 1, mid = q[(l + r) / 2];
    while(i < j) {
        do {
            i++;
        }while(q[i] < mid);
        do {
            j--;
        }while(q[j] > mid);
        if(i < j) swap(q[i], q[j]);
    }
    qsort(q, l, j);
    qsort(q, j + 1, r);
}

int main() {
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%d", &q[i]);
    qsort(q, 0, n - 1);
    printf("%d\n", q[m - 1]);
    return 0;
}
