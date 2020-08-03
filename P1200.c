/*************************************************************************
	> File Name: P1200.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 16:35:44 2019
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[27] = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char a[26], b[26];

int cal(char *arr) {
    int len = strlen(arr);
    int ans = 1;
    for (int i = 0; i < len; i++) {
        for (int j = 1; j < 27; j++) {
            if (arr[i] ==  str[j]) {
                ans *= j;
            }
        }
    }
    ans %= 47; 
    return ans;
}
int main() {
    scanf("%s", a);
    scanf("%s", b);
    if (cal(a) == cal(b)) {
        printf("GO\n");
    } else {
        printf("STAY\n");
    }
    return 0;
}
