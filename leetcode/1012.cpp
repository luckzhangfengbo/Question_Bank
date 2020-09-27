/*************************************************************************
	> File Name: 1012.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/13 08:42:30 2020
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
#include <string>
using namespace std;
#define max_n  100
int n;


bool cmp(const string &a, const string &b) {
    return (a + b) > (b + a);
}



string a[max_n + 5];
int main() {
    cin >> n;
    for (int i = 1; i <=n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    return 0;
}
