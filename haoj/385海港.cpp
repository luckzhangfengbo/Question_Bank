/*************************************************************************
 > File Name: 385海港.cpp
 > Author: 
 > Mail: 
 > Created Time: 三 10/14 19:53:34 2020
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
struct person {
    int t, c;
};

int nation[100005];

int main() {
    queue<person> que;
    int n, con = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int t, num;
        scanf("%d%d", &t, &num);
        while (!que.empty()) {
            person temp = que.front();
            if (t - temp.t < 86400) break;
            que.pop();
            nation[temp.c]--;
            if (nation[temp.c] == 0) con--;
        }
        for (int j = 0; j < num; j++) {
            int temp;
            scanf("%d", &temp);
            que.push({t, temp});
            if (nation[temp] == 0) con++;
            nation[temp]++;
        }
        printf("%d\n", con);
    }
    return 0;
}
