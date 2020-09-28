/*************************************************************************
	> File Name: P5705数字反转.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/28 09:51:20 2020
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

char c[17];

int main() {
	scanf("%s", c);
	for(int i = strlen(c) - 1; i >= 0; --i)
		printf("%c", c[i]);
	return 0;
}
