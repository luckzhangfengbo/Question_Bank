/*************************************************************************
	> File Name: 917.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六 11/ 7 23:06:02 2020
 ************************************************************************/
class Solution {
public:
    string reverseOnlyLetters(string S) {
        int l = 0, r = S.length() - 1;
        if (!isalpha(S[l])) {
            l++;
        }
        if (!isalpha(S[r])) {
            r--;
        }
        if (isalpha(S[l]) && isalpha(S[r])) {
            swap(S[l++], S[r--]);
        }
        return S;
    }
};

//isalpha 是判断是不是英文字符
