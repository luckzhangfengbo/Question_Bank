/*************************************************************************
	> File Name: leetCode-452.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 18:37:56 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int res=0;
        if(!points.size())return res;
        //排序
        sort(points.begin(),points.end(),[](const vector<int>& x,const vector<int>& y){
            return x[1]<y[1];
        });
        //初始化箭的位置
        int arrow=points[0][1];
        for(vector<int>& point:points)
            //射不到了，换箭
            if(point[0]>arrow){
                arrow=point[1];
                res++;
            }
        return res+1;
    }
};
