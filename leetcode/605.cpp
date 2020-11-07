/*************************************************************************
	> File Name: 605.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六 11/ 7 23:26:00 2020
 ************************************************************************/
 ass Solution {
     public:
     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
                 int cnt = 0;
                 flowerbed.insert(flowerbed.begin(),0);
                 flowerbed.insert(flowerbed.end(),0);
         for(int i = 1; i < flowerbed.size()-1;i++){
             if (!(flowerbed[i-1]|flowerbed[i]|flowerbed[i+1]|0)){
                                 cnt++;
                                 flowerbed[i] = 1;
                             
             }
                     
         }
                 return cnt >= n;
             
     }

 };

