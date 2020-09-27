/*************************************************************************
	> File Name: leetCode_121.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  9/15 15:19:36 2020
 ************************************************************************/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mmin = INT_MAX;//遇到最小的数
        int mmax = 0;//差值最大数
        for(int i : prices) {
            mmin = min(i, mmin); 
            mmax = max(i - mmin, mmax);
        }
        return mmax;
    }
};

