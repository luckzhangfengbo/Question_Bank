/*************************************************************************
	> File Name: 1266.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 日 11/ 8 14:54:25 2020
 ************************************************************************/

//切比雪夫距离




class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int x0 = points[0][0], x1 = points[0][1];
        int ans = 0;
        for (int i = 1; i < points.size(); ++i) {
            int y0 = points[i][0], y1 = points[i][1];
            ans += max(abs(x0 - y0), abs(x1 - y1));
            x0 = y0;
            x1 = y1;
        }
        return ans;
    }
};

