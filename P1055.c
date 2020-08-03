/*************************************************************************
	> File Name: P1055.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  3/ 5 15:20:57 2019
 ************************************************************************/

#include<stdio.h>

int main() {
  char str[14], mod[12] = "0123456789X"; 
  scanf("%s", str);
  int c = 1, n = 0;
  for(int i = 0; i < 12; i++) {
        if (str[i] == '-') continue; 
        n += (str[i] - '0') * c++;
  }
  if(mod[n % 11] == str[12]) printf("Right\n");
  else {
      str[12] = mod[ n % 11]; 
      printf("%s\n", str);
  }
  return 0;
}
