/*************************************************************************
	> File Name: P1308.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 22:32:30 2019
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INF 999999

int res(char *arr) {
    int len = strlen(arr);
    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] += 32;
        }
    }
    return 0;
}

int main() {
    char word[1000001] = {0}, *q, cmp[11] = {0}, *p;
    int flag = 0, ans = 0, ans1 = -1;
    scanf("%[^\n]s", cmp);
    getchar();
    scanf("%[^\n]s", word);
    getchar();
    res(cmp);
    res(word);
    int len = strlen(cmp);
    p = word;
    for(; (q = strstr(p, cmp)); ) {
        if (q != NULL && ( q == word || *(q - 1) == ' ') && ( *(q + len) == '\0' || *(q + len) == ' ' )) {
            ans += 1;
            if (flag == 0) {
                flag = 1;
                ans1 = q - word;
            }
        }
        p = q + len;
    }
    if (flag == 1) {
        printf("%d %d\n", ans, ans1);
    } else {
        printf("%d\n", ans1);
    }
    return 0;
}
