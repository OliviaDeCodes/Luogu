/*************************************************************************
	> File Name: P1044.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  4/14 15:49:47 2019
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int func(int n) {
    int f[30] = {0};
    f[0] = f[1] = 1;
    for(int i = 2; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            f[i] += f[j] * f[i - j - 1];
        }
    }
    return f[n];
}

int main() {
    int n, num = 0;
    scanf("%d", &n);
    num = func(n);
    printf("%d\n", num);
    return 0;
}
