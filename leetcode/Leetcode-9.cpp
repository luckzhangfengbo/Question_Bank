/*************************************************************************
	> File Name: Leetcode-9.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月27日 星期四 11时19分20秒
 ************************************************************************/


bool isPalindrome(int x){
    long long sum = 0 ;
    long long  a ;
    a = x;
    if (x < 0) return false;
    while (x > 0) {
        sum  = sum  * 10 + x % 10;
        x /= 10;
    }
    if (sum == a)  return true ;
    return false;
}


