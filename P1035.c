/*************************************************************************
	> File Name: P1035.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 10:37:13 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int k, n = 0;
    scanf("%d", &k);
    for (double i = 0; i <= k; n++, i += 1.0 / n); 
    printf("%d\n", n);    
    return 0;
}
