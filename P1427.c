/*************************************************************************
	> File Name: P1427.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 13:48:16 2019
 ************************************************************************/

#include<stdio.h>

int main() {
    int arr[105] = {0}, num, count = 0;
    do {
        count++;
        scanf("%d", &arr[count]);
    } while(arr[count] != 0);

    for (int i = count - 1; i >= 1; i--) {
        printf("%d ", arr[i]);
        if (i == 1) printf("\n");
    }
    return 0;
}
