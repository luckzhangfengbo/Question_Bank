/*************************************************************************
	> File Name: LeetCode3.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年03月04日 星期三 19时24分45秒
 ************************************************************************/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            unordered_map<char, int> m;//无序映射
            int pre = 0, ans = 0;
            for (int i = 0; s[i] ;i++) {
                    if (m.find(s[i]) == m.end()) pre += 1;
                    else pre = min(pre + 1, i - m[s[i]]);
                    ans = max(ans , pre);
                    m[s[i]] = i;
            }
            return ans ;
    }
};
