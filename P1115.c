/*************************************************************************
	> File Name: P1115.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  5/25 20:42:46 2019
 ************************************************************************/

#include <stdio.h>

#define MAX_N 200000
int f[MAX_N + 5] = {0};

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &f[i]);
    int min = 0, sum = 0, ans = f[0];
    for (int i = 0; i < n; i++) {
        sum += f[i];
        if (sum - min > ans) ans = sum - min;
        if (sum < min) min = sum;
    }
    printf("%d\n", ans);
    return 0;
}
