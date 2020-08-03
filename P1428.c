/*************************************************************************
	> File Name: P1428.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 14:13:05 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, arr[100] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = n; i >= 1; i--) {
        int c = 0;
        for (int j = i - 1; j >= 1; j--) {
            if (arr[i] > arr[j]) {
                c++;
            }
        }
        arr[i] = c;
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
        if (i == n) {
            printf("\n");
        }
    }
    return 0;
}
