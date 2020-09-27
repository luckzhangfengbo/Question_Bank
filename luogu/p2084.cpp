/*************************************************************************
	> File Name: p2084.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  9/12 21:45:58 2020
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



int main() {
    int a;
    int flag = 0;
    string b;
    cin >> a >> b;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != '0') {
            if (flag != 0) cout << "+";
            cout << b[i] << "*" << a << "^" << b.size() - i - 1;
            flag = 1;
        }
    }

    return 0;
}
