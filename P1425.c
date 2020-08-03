/*************************************************************************
	> File Name: P1425.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  3/ 4 22:31:43 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c, d, h = 0, m = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    h = (c * 60 + d) - (a * 60 + b);
    m = h % 60;
    h /= 60;
    printf("%d %d\n", h, m);
    return 0;
}
