/*************************************************************************
	> File Name: 785.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/28 08:18:28 2020
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <map>
#include <stack>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cmath>
using namespace std;


#define max_n 10000001

int a[max_n + 5];

void quick_sort(int num[], int l, int r) {
    if (l >= r) return ;
    int i = l - 1, j = r + 1, x = num[(l + r) / 2];//+优先级大于>>
    while (i < j) {
        do i++; while (num[i] < x);
        do j--; while (num[j] > x);
        if (i < j) swap(num[i], num[j]);
    }
    quick_sort(num, l, j), quick_sort(num, j + 1, r);

}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    quick_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
