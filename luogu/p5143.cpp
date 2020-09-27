/*************************************************************************
	> File Name: p5143.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/13 08:55:28 2020
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
struct node{
	int x,y,z;
}a[50001];
double ans;
int n;
int cmp(node x,node y)
{
	return x.z<y.z;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x>>a[i].y>>a[i].z;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n-1;i++)
	{
		ans+=sqrt(((a[i].x-a[i+1].x)*(a[i].x-a[i+1].x))+((a[i].y-a[i+1].y)*(a[i].y-a[i+1].y))+(a[i].z-a[i+1].z)*(a[i].z-a[i+1].z));
	}
	printf("%.3f",ans);
}
