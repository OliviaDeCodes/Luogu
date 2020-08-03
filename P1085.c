/*************************************************************************
	> File Name: P1085.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一  3/ 4 23:01:30 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int day[8] = {0}, n1 = 0, n2 = 0;
    for (int i = 1; i < 8; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if ((a + b) >= 8) {
            day[i] = a + b;
            if (n1 < day[i]) n1 = day[i];
        }
    }
    for (int i = 1; i < 8; i++) {
        if (n1 == day[i]) {
            n2 = i;
            printf("%d\n", n2);
            return 0;
        }
    }
    return 0;
}
