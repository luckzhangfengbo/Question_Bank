/*************************************************************************
	> File Name: leetcode-75.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六 11/ 7 16:54:17 2020
 ************************************************************************/
class Solution {
public:
    void sortColors(vector<int>& a) {
        int n = a.size();
        for (int i = 0;  i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (a[j] > a[j + 1]) {
                    int t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
        return ;
    }
};
