/*************************************************************************
	> File Name: leetCode_66.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  9/15 07:51:50 2020
 ************************************************************************/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            ++digits[i];
            if (digits[i] != 10) {
                return digits;
            } else {
                digits[i] = 0;
            } 
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
