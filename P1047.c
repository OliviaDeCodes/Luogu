/*************************************************************************
	> File Name: P1047.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 13:28:09 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int arr[10000 + 5] = {0};
    int L, M, start, end, last = 0;
    scanf("%d %d", &L, &M);
    for (int i = 1; i <= M; i++) {
        scanf("%d %d", &start, &end);
        for (int j = start; j <= end; j++) {
            arr[j] = 1;
        }
    }
    for (int k = 0; k <= L; k++) {
        if (arr[k]) {
            last++;
        }
    }
    printf("%d\n", L - last + 1);
    return 0;
}
