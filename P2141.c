/*************************************************************************
	> File Name: P2141.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 14:36:47 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int a[200005] = {0};
    int b[200005] = {0};
    int n, sum; 
    int arr[105] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
        b[arr[i]] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            a[arr[i] + arr[j]]++;
        }
    }
    for (int i = 1; i < 200005; i++) {
        if (a[i] > 0 && b[i]) sum++;
    }
    printf("%d\n", sum);
    return 0;
}
