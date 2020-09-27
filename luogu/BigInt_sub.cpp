/*************************************************************************
	> File Name: BigInt_sub.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/13 14:31:44 2020
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <map>
#include <stack>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;
#define max_n  1000

string str1, str2, str3;

int num1[max_n + 5], num2[max_n + 5], num3[max_n + 5];

int main() {
    cin >> str1 >> str2;
    int len1 = str1.size();
    int len2 = str2.size();
    if (len1  < len2 || ((len1 == len2) && (str1 < str2))) {
        str3 = str2;
        str2 = str1;
        str1 = str3;
        cout << "-";
    }
    len1 = str1.size();
    len2 = str2.size();

    for (int i = 0 ; i < len1; i++) {
        num1[i] = str1[len1 - i - 1] - '0';
    }

    for (int i = 0 ; i < len2; i++) {
        num2[i] = str2[len2 - i - 1] - '0';
    }



    int k = 0;

    for (int i = 0 ; i < len1; i++) {
        k = num1[i] - num2[i];
        if (k < 0) {
            k += 10;
            num1[i + 1] -= 1;
        }
        num3[i] = k;
    }

    while (num3[len1] == 0) len1--;
    for(int i = len1; i >= 0; i--) {
        cout << num3[i];
    }
    cout << endl;
    return 0;
}
