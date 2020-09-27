/*************************************************************************
	> File Name: LeetCode976.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 19时21分35秒
 ************************************************************************/

int largestPerimeter(int* A, int ASize){
    int i,j,max=0,max_index;
    for(i = 0;i < ASize;i++){
        max = 0;
        for(j = i;j < ASize;j++)
            if (A[j] > max){
                max = A[j];
                max_index = j;
        }
        j = A[i];
        A[i] = max;
        A[max_index] = j;
    }
    for(i = 0;i < ASize - 2;i++){
        if(A[i] < A[i + 1] + A[i + 2]) 
            return A[i] + A[i + 1] + A[i + 2];
    }
    return 0;
}
