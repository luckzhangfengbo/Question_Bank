/*************************************************************************
	> File Name: LeetCode7.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 19时58分29秒
 ************************************************************************/



#define MAX 2147483647
#define MIN -2147483648

int reverse(int x) {
        long long num = 0;
        while (x) {
                num = num * 10 + x % 10;
                x = x  / 10;
        }
        return (num > MAX || num < MIN) ? 0 : num;
}

