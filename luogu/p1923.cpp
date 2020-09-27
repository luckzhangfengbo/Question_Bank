/*************************************************************************
	> File Name: p1923.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  9/12 22:03:13 2020
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
using namespace std;
#define max_n 199
int a[max_n];
int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+ n);
    cout  << a[k] << endl;
    return 0;
}
