/*************************************************************************
	> File Name: LeetCode合并排序的数组.c
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年03月03日 星期二 19时46分19秒
 ************************************************************************/



void merge(int* A, int ASize, int m, int* B, int BSize, int n){
    int i = m - 1, j = n - 1, k = m + n - 1;
    while(i >= 0 && j >= 0)
        if(A[i] >= B[j])
            A[k --] = A[i --];
        else
            A[k --] = B[j --];
    while(j >= 0){
        A[k --] = B[j --];
    }
}
