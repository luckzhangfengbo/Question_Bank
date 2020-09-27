/*************************************************************************
	> File Name: Leetcode-202.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月26日 星期三 17时29分12秒
 ************************************************************************/



int get(int x) {
    int temp = 0;
    while (x) {
        temp += (x % 10) * (x % 10);
        x /= 10;
    }
    return temp;
}

bool isHappy(int n) {
    int p = n, q = n;
    while (q != 1) {
        p = get(p);
        q = get(get(q));
        if (p == q) break;
    }
    return (q == 1);
}
