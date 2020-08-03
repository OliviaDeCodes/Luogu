/*************************************************************************
	> File Name: P1980.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 11:38:26 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, x, c = 0;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++) {
        int loop = i;
        while (loop != 0) {

            if (x == loop % 10) {
                c++;
            }
            loop /= 10;
        }
    }
    printf("%d\n", c);
    return 0;
}
