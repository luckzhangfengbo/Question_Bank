/*************************************************************************
	> File Name: 215.数组中的第K个最大元素.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/17 08:02:12 2020
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
#include <cstdio>
using namespace std;

//暴力

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int result = 0;
        int numsSize = int(nums.size());
        if (numsSize == 0 || k > numsSize) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        result = nums[numsSize - k];//4 - 3 = 1, 那么下标为1的就是第k大的值
        return result;
    }
};


//小顶堆

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int result = 0;
        int numsSize = int(nums.size());
        if (numsSize == 0 || k > numsSize) {
            return 0;
        }

        priority_queue<int, vector<int>, greater<int>> store;//优先队列
        //堆中维持k个最大数
        for (int i = 0; i < numsSize; i++)
        {
            store.push(nums[i]);
            if (int(store.size()) > k)
            {
                store.pop();
            }
        }

        result = store.top();
        return result;
    }
};


//选择排序算法


class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int result = 0;
        int numsSize = int(nums.size());
        if (numsSize == 0 || k > numsSize)
        {
            return 0;
        }
        //寻找第kMIN小的数
        int kMin = numsSize - k + 1;
        result = select(nums, 0, numsSize - 1, kMin);
        return result;
    }

    int select(vector<int> &nums, int left, int right, int target)
    {
        if (left == right)
        {
            return nums[left];
        }
        int cut = partition(nums, left, right);
        //当前第currentResult小的元素
        int currentResult = cut - left + 1;
        if (target == currentResult)
        {
            return nums[cut];
        }
        else if (target < currentResult)
        {
            return select(nums, left, cut - 1, target);
        }
        else
        {
            //寻找接下来第target - currentResult小的数
            return select(nums, cut + 1, right, target - currentResult);
        }
        return 0;
    }

    int partition(vector<int> &nums, int left, int right)
    {
        int cut = nums[right];
        //i指向大堆的最左边的数，j指向下一个判断的数
        int i = left;
        for (int j = left; j < right; j++)
        {
            if (nums[j] <= cut)
            {
                exchange(nums[i], nums[j]);
                i++;
            }
        }
        exchange(nums[i], nums[right]);
        return i;
    }

    void exchange(int &a, int &b)
    {
        int tmpInt = a;
        a = b;
        b = tmpInt;
        return;
    }
};

