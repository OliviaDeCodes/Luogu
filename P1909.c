/*************************************************************************
	> File Name: P1909.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 09:48:44 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, a, b, money[3] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= 3; i++) {
        scanf("%d %d", &a, &b);
        if (n % a == 0) {
            money[i] = n / a * b;
        } else {
            money[i] = (n / a + 1) * b; 
        }
    }
    for (int i = 1; i <= 3; i++) {
        if (money[0] < money[i]) {
            money[0] = money[i];
        }
    }
    for (int i = 1; i <= 3; i++) {
        if (money[0] > money[i]) {
            money[0] = money[i];
        }
    }
    printf("%d\n", money[0]);
    return 0;
}
