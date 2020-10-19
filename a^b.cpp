/*************************************************************************
	> File Name: a^b.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/28 21:11:22 2020
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

long long a, b , p;

int quick_mod(long long a, long long b, long long p) {
    long long ans  = 1,  temp = a;
    while (b) {
        if (b & 1) ans = ans * temp % p;
        temp = temp * temp % p;
        b >>= 1;
    }
    return ans %  p;
}



int main() {
    cin >> a >> b >> p;
    cout << quick_mod(a, b, p) << endl;
    return 0;
}
