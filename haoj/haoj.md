# 高新面试题整理

## 1.编程刷题课

### 1.1最近点对问题

**思路：** 

![image-20200920150900412](https://tva1.sinaimg.cn/large/007S8ZIlly1gix4tle74kj30qx0hytf7.jpg)

> 1.最短距离是红圈里面选最小距离， 黑圈里面选最短距离，之后还有就是在两个圈的p2区域内去选择两点之间的最短距离

```c++
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

struct node {
    double x, y;
};

bool cmp(node a, node b) {
    if (a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int n;
node p[100005];

double dis(int p1, int p2) {
    return sqrt((p[p1].x - p[p2].x) * (p[p1].x - p[p2].x) + (p[p1].y - p[p2].y) * (p[p1].y - p[p2].y));
}

double func(int l, int r) {
    if (l == r) {//相等了就说明是一个点，返回一个不可能的值
        return 2100000000;
    }
    if (l + 1 == r) {//两个点那就求两点之间的距离
        return dis(l, r);
    }
    int mid = (l + r) / 2;//多个点求中间值
    double d = min(func(l, mid), func(mid + 1, r));//分成两部分
    for (int i = mid; i >= l && p[mid].x - p[i].x < d; i--) {//不能出圈
        for (int j = mid + 1; j <= r && p[j].x - p[mid].x < d; j++) {
            d = min(d, dis(i, j));
        }
    }
    return d;
}

int main() {
    scanf("%d", &n);//输入的点比较多，用scanf输入
    for (int i = 0; i < n; i++) {
        scanf("%lf%lf", &p[i].x, &p[i].y);
    }
    sort(p, p + n, cmp);//排序
    double ans = func(0, n - 1);//答案
    printf("%lf\n", ans);
    return 0;
}
```

### 例题   **      海贼oj ----- 241. 最近点对**

#### 第一种思路

```c++
/*************************************************************************
	> File Name: 241.cpp
	> Author:
	> Mail:
	> Created Time: 日  9/20 11:54:53 2020
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

struct node {
    double x, y, z;//z代表的是集合的问题
};

bool cmp(node a, node b) {
    if (a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int n;
node p[200005];

double dis(int p1, int p2) {
    return sqrt((p[p1].x - p[p2].x) * (p[p1].x - p[p2].x) + (p[p1].y - p[p2].y) * (p[p1].y - p[p2].y));
}

double func(int l, int r) {
    if (l == r) {
        return 2100000000;
    }
    if (l + 1 == r) {
        if (p[l].z != p[r].z) return dis(l, r);
        return 2100000000;//在一个集合返回一个极大值
    }
    int mid = (l + r) / 2;
    double d = min(func(l, mid), func(mid + 1, r));
    for (int i = mid; i >= l && p[mid].x - p[i].x < d; i--) {
        for (int j = mid + 1; j <= r && p[j].x - p[mid].x < d; j++) {
            if (p[i].z != p[j].z) d = min(d, dis(i, j));//当不在一个集合的时候返回 d
        }
    }
    return d;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf%lf", &p[i].x, &p[i].y);
        p[i].z = 1;
    }
    for (int i = 2 * n - 1; i >= n; i--) {
        scanf("%lf%lf", &p[i].x, &p[i].y);
        p[i].z = 2;
    }
    sort(p, p + 2 * n, cmp);
    double ans = func(0, 2 * n - 1);
    printf("%.3f\n", ans);
    return 0;
}
```

#### 第二种思路

### ![image-20200920153834568](https://tva1.sinaimg.cn/large/007S8ZIlly1gix5ob0vo8j30qk0i9q7l.jpg)

> 1从两个集合中将点都拿出来，之后找到距离为d的点的集合（1 ---- d- 1）从黑框中去选择

```c++
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

struct node {
    double x, y, z;
};

bool cmp(node a, node b) {
    if (a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int n, px_ind, px[1600005];
node p[200005];

bool cmp2(int a, int b) {
    return p[a].y < p[b].y;
}

double dis(int p1, int p2) {
    return sqrt((p[p1].x - p[p2].x) * (p[p1].x - p[p2].x) + (p[p1].y - p[p2].y) * (p[p1].y - p[p2].y));
}

double func(int l, int r) {
    if (l >= r) {
        return 2100000000;
    }
    if (l + 1 == r) {
        if (p[l].z != p[r].z) return dis(l, r);
        return 2100000000;
    }
    int mid = (l + r) / 2;
    double d = min(func(l, mid), func(mid + 1, r));
    int raw = px_ind;
    for (int i = mid; i >= l && p[mid].x - p[i].x < d; i--) {
        px[px_ind++] = i;
    }
    for (int j = mid + 1; j <= r && p[j].x - p[mid].x < d; j++) {
        px[px_ind++] = j;
    }
    sort(px + raw, px + px_ind, cmp2);
    for (int i = raw; i < px_ind; i++) {
        for (int j = i + 1; j < px_ind && p[px[j]].y - p[px[i]].y < d; j++) {
            if (p[px[i]].z != p[px[j]].z) d = min(d, dis(px[i], px[j]));
        }
    }
    return d;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf%lf", &p[i].x, &p[i].y);
        p[i].z = 1;
    }
    for (int i = 2 * n - 1; i >= n; i--) {
        scanf("%lf%lf", &p[i].x, &p[i].y);
        p[i].z = 2;
    }
    sort(p, p + n * 2, cmp);
    double ans = func(0, 2 * n - 1);
    printf("%.3f\n", ans);
    return 0;
}
```



### 1.2最短路算法一

### 例题  - haoj-----520等式

思路：前缀和 + 二分查找

```c++
#include <iostream>
using namespace std;

long long a, num[20000005];

int main() {
    cin >> a;
    for (int i = 1; i <= 20000000; i++) {
        num[i] = num[i - 1] + i;
    }
    for (int i = a; 1; i++) {
        int l = i + 1, r = 20000000;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (num[mid] - num[i] == num[i - 1]) {
                cout << i << " " << mid << endl;
                return 0;
            }
            if (num[mid] - num[i] > num[i - 1]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }
    return 0;
}
```

### 1.2.1Floyd算法（求多源最短路径）

https://www.cnblogs.com/wangyuliang/p/9216365.html

存边 ： 邻接矩阵和邻接表

```c++
#include <iostream>
#include <cstring>
using namespace std;

int n, m, s, ans[1005][1005];

int main() {
    memset(ans, 0x3F, sizeof(ans));
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        ans[a][b] = c;
    }
    for (int i = 1; i <= n; i++) {
        ans[i][i] = 0;
    }//对角线的全部初始化为0
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                ans[j][k] = min(ans[j][k], ans[j][i] + ans[i][k]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i != 1) cout << " ";
        cout << ans[s][i];
    }
    return 0;
}
```

