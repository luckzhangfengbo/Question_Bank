/*************************************************************************
	> File Name: leetcode_14.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  9/15 07:48:41 2020
 ************************************************************************/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        for (int j = 0; j < strs[0].size(); ++j) {
            for (int i = 0; i < strs.size() - 1; ++i) {
                if (j >= strs[i].size() || j >= strs[i + 1].size() || strs[i][j] != strs[i + 1][j]) {
                    return strs[i].substr(0, j);
                }
            }
        }
        return strs[0];
    }
};
