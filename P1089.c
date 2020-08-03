/*************************************************************************
	> File Name: P1089.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 09:10:07 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int money[13], m = 0, n = 0;
    for (int i = 1; i <= 12; i++) {
        scanf("%d", &money[i]);
        m = ((n + 300 - money[i]) / 100) * 100 + m;
        n=(n + 300 - money[i]) - (n + 300 - money[i]) / 100 * 100;
        if (n < 0) {
            printf("-%d\n", i);
            return 0;
        }
    } 
    printf("%.f\n", m * 1.2 + n);
    return 0;
}
