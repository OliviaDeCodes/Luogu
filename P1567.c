/*************************************************************************
	> File Name: P1567.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 15:02:12 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, count = 1, max = 0;
    int arr[1000005] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    } 
    for (int i = 2; i <= n; i++) {
        if (arr[i] > arr[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (max < count) {
            max = count;
        }
    }
    printf("%d\n", max);
    return 0;
}
