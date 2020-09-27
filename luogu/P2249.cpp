/*************************************************************************
	> File Name: P2249.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/13 10:31:33 2020
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
#include <cmath>
#include <cstdio>
using namespace std;
#define max_n 1000000


int a[max_n + 5];
int n, m , q;
int init(int x) {
    int l = 1, r = n;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (a[mid] >= x) r = mid;
        else l = mid + 1;;
    }
    if (a[r] == x) return l;
    else return -1;
}




int main() {
    scanf("%d %d",&n,&m); 
	
	for (int i=1 ; i<=n ; i++) scanf("%d",&a[i]); 
	
	for (int i=1 ; i<=m ; i++) {
		scanf("%d",&q);
		int ans = init(q); 
		printf("%d ",ans);  
	}
    return  0;
}
