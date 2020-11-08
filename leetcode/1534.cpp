/*************************************************************************
	> File Name: 1534.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 日 11/ 8 14:19:31 2020
 ************************************************************************/
//暴力解法
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int res = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n;j ++) {
                for (int  k = j  + 1; k < n; k++) {
                    if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) {
                        res++;
                    }
                }
            }
        }
        return res;
    }
};

//暴力加剪枝


class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        int n = arr.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (abs(arr[i] - arr[j]) > a) continue;
                for (int k = j + 1; k < n; ++k) {
                    if (abs(arr[j] - arr[k]) > b || abs(arr[i] - arr[k]) > c) continue;
                    count++;
                }
            }
        }
        return count;
    }
};

