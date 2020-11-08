/*************************************************************************
	> File Name: 1331.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 日 11/ 8 14:44:52 2020
 ************************************************************************/
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> res;
        map<int ,int> m;
        for(auto c:arr) m[c];
        int i=1;
        for(auto it=m.begin(); it!=m.end(); ++it){it->second = i; i ++;}
        for(auto c:arr) res.push_back(m[c]);
        return res;
    }
};

