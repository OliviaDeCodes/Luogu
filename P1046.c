/*************************************************************************
	> File Name: P1046.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 13:17:52 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int arr [10] = {0}, l, n = 0;
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &l);
    for (int i = 1; i <= 10; i++) {
        if (l >= arr[i] || l + 30 >= arr[i]) {
            n++;
        }
    }
    printf("%d\n", n);
    return 0;
}
