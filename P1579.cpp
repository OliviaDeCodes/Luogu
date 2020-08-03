/*************************************************************************
	> File Name: P1579.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 一 12/30 16:53:40 2019
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int isprime(int x){
    for (int i = 2; i * i <= x; i++)
        if( x % i == 0) return 0;
    return 1;
}

int main(){
    int n;
    cin >> n;
    if(isprime(n - 4)) {
    cout << "2 " << "2 " << n-4;
    return 0;
    }     //第一种情况
    for (int i = 3; i < n; i++)//第二种情况
        if ((i % 2) != 0 && isprime(i))//优化
    for (int j = i; j < n; j++) {
        if ((j % 2) != 0 && isprime(j)) {//优化
            if (isprime(n - i - j)) {
                cout << i << " " << j << " " << n - i - j;
                return 0;//不用循环第三个数，优化。
            }
        }
    }
}
