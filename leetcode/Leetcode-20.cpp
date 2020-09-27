/*************************************************************************
	> File Name: Leetcode-20.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月27日 星期四 10时49分42秒
 ************************************************************************/


bool isValid(char* s) {
    int len = strlen(s), top = -1, flag = 1;
    char *stack = (char *)malloc(sizeof(char) * len);
    while (s[0]) {
        switch (s[0]) {
            case '(':
            case '[':
            case '{': stack[++top] = s[0]; break;
            case ')': flag = (top != -1 && stack[top--] == '('); break;
            case ']': flag = (top != -1 && stack[top--] == '['); break;
            case '}': flag = (top != -1 && stack[top--] == '{'); break;
        }
        if (!flag) break;
        s++;
    }
    free(stack);
    return (flag && top == -1);
}
