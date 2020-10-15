/*************************************************************************
 > File Name: 565位的交换.cpp
 > Author: 
 > Mail: 
 > Created Time: 三 10/14 21:19:29 2020
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
using namespace std;



int main() {
     int n;
    cin >> n;
    int ans = ((n << 16) & 0xffff0000) | ((n >> 16) & 0x0000ffff);
    cout << ans << endl;

    return 0;
}
