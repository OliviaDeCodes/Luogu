/*************************************************************************
	> File Name: P1424.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 11:19:23 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int t, n, sum = 0;
    scanf("%d %d", &t, &n);
    for (int i = 1; i <= n; i++) {
        if (t != 6 && t != 7) {
            sum += 250;
        } 
        if (t == 7) {
            t = 1;
        } else {
            t++;
        } 
    }
    printf("%d\n", sum);
    return 0;
}
