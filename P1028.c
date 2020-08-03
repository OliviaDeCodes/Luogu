/*************************************************************************
	> File Name: P1028.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  5/25 20:12:01 2019
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000
int f[MAX_N + 5];

int main() {
    int n;
    scanf("%d", &n);
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (i % 2) {
            f[i] = f[i - 1];
        } else {
            f[i] = f[i - 1] + f[i / 2];
        }
    }
    printf("%d\n", f[n]);
    return 0;
}
