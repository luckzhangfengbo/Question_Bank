/*************************************************************************
	> File Name: 1624.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六 11/ 7 22:50:02 2020
 ************************************************************************/
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int len = size(s);
        int  r = 0;
        int key=-1;
        for(int l = 0;l< len - 1;++l){
            for(r=1; r < len; ++r){
                if(s[l]==s[r]&&(r-l-1)>key)
                    key=r-l-1;
            }
            r=l+1;
        }
        return key;
    }
};


