/*************************************************************************
	> File Name: P1057.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  5/25 20:28:25 2019
 ************************************************************************/

#include <stdio.h>
int f[35][35];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    f[0][1] = 1;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            f[i][j] = f[i - 1][j - 1] + f[i - 1][j + 1];
            if (j == 1) f[i][j] += f[i - 1][n];
            if (j == n) f[i][j] += f[i - 1][1];
        }
    }
    printf("%d\n", f[m][1]);
    return 0;
}
