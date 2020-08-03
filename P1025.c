/*************************************************************************
	> File Name: P1025.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  5/25 19:46:36 2019
 ************************************************************************/

#include <stdio.h>

#define MAX_N 200
#define MAX_K 6

int f[MAX_N + 5][MAX_K + 5];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    f[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            f[i][j] = f[i - 1][j - 1] + f[i - j][j];
        }
    }
    printf("%d\n", f[n][k]);
    return 0;
}
