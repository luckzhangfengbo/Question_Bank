/*************************************************************************
	> File Name: 434.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六 11/ 7 22:15:27 2020
 ************************************************************************/
class Solution {
public:
    int countSegments(string s) {
        int ans = 0;
        s += ' ';
        for(int i = 0; i< s.size();i++) {
            if (i > 0 && s[i] == ' ' && s[i - 1] != ' ') ans++ ;
        }
        return ans;
    }
};

