/*************************************************************************
	> File Name: BigInt.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/13 13:45:35 2020
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

#define max_n 10000

char str1[max_n + 5], str2[max_n + 5];
int num1[max_n + 5], num2[max_n + 5];



int main() {
    memset(str1, 0, sizeof(str1));
    memset(str2, 0, sizeof(str2));
    memset(num1, 0, sizeof(num1));
    memset(num2, 0, sizeof(num2));
    cin >> str1 >> str2;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int j = 0;
    int max = len1 > len2 ? len1 : len2;
    for (int i = len1 - 1; i >= 0; i--)  {
        num1[j++] = str1[i]- '0';
    }
    j = 0;
    for (int i = len2 - 1; i >= 0; i--)  {
        num2[j++] = str2[i]- '0';
    }
        
    for (int i = 0; i < max; i++) {
        num2[i] += num1[i];
        if (num2[i] >= 10) {
            num2[i] -= 10;
            num2[i + 1] += 1;
        }
    }
    
    if (num2[max]) printf("%d", num2[max]);
    for (int i = max - 1; i >= 0; i--) {
        printf("%d", num2[i]);
    }
    cout << endl;
    return 0;
}
