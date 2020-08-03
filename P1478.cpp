/*************************************************************************
	> File Name: P1478.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日 12/29 21:34:24 2019
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, s, a, b, x, y, cnt, power, sum;

struct apple {
    int x, y;
} ap[50005];

int cmp(apple x, apple y) {
    return x.y < y.y;
}

int main() {
    cin >> n >> s >> a >> b;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        if (x <= a + b) {
            cnt += 1;
            ap[cnt].x = x;
            ap[cnt].y = y;
        }
    }
    sort(ap + 1, ap + cnt + 1, cmp);
    power = s;
    sum = 0;
    for (int i = 1; power >= ap[i].y && i <= cnt; i++) {
        sum += 1;
        power -= ap[i].y;
    }
    cout << sum << endl;
    return 0;
}
