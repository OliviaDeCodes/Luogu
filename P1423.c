/*************************************************************************
	> File Name: P1423.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 10:56:18 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    float far, num = 2;
    int n = 0;
    scanf("%f", &far);
    while (far >= 0) {
        far -= num;
        num *= 0.98;
        n++;
    }
    printf("%d\n", n);
    return 0;
}
