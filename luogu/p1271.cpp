/*************************************************************************
	> File Name: p1271.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/13 08:37:23 2020
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
#define max_m 2000000


int a[max_m];
int n, m;
int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    sort(a, a + m);
    for (int i = 0; i < m; i++) {
        cout << a[i] << " "; 
    }
    
    return 0;
}
