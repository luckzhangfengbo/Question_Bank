/*************************************************************************
 > File Name: 570排队.cpp
 > Author: 
 > Mail: 
 > Created Time: 四 10/15 14:08:11 2020
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



struct node {
    int hei, cnt;
};
int n, num[80005], ans[80005], all;
 
int main() {
    cin >>  n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    
    stack<node> sta;
    sta.push({2100000000, -1});
    for (int i = n - 1; i >= 0; i--) {
        while (sta.top().hei <  num[i]) {
            node temp = sta.top();
            sta.pop();
            ans[i]++;
            ans[i] += ans[temp.cnt];
        }
        all += ans[i];
        sta.push({num[i], i});
    }
    cout << all << endl;
    return 0;
}
