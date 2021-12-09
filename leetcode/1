/*************************************************************************
	> File Name: leetcode-551.cpp
	> Author: zhangfb
	> Mail: 1819067326@qq.com
	> Created Time: Thu 09 Dec 2021 12:37:06 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <string>
using namespace std;

// //要注意L连续的问题 

// class Solution {
// public:
//     bool checkRecord(string s) {
//         int A_num  = 0;
//         int L_num = 0 ;
//         for (int i = 0; i < s.size(); i++){
//             if (s[i] == 'A')  {
//                 A_num++;
//                 if (A_num >= 2) {
//                     return false;
//                 }
//             } 
//             if (s[i] == 'L') {
//                 L_num++;
//                 if (L_num >= 3)  {
//                     return false;
//                 } 
//             } else {
//                 L_num = 0;
//             }
//         }
//         return true;
//     }
// };

//一行代码解决
class  Solution {
    public:
    bool checkRecord(string s) {
        return !(count(s.begin(), s.end(), 'A') >= 2 || s.find("LLL") != string::npos);
    }
};



