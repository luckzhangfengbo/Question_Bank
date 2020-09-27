/*************************************************************************
	> File Name: Leetcode-70.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 16时10分56秒
 ************************************************************************/



int climbStairs(int n){
        int *p = (int *) malloc(sizeof (int) * 1000);
        p[1] = 1;
        p[2] = 2;
        for (int i = 3; i <= n ;i++) {
                p[i] = p[i - 1] + p[i - 2];
        }
        return p[n];
}

``
