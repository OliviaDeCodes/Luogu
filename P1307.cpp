/*************************************************************************
	> File Name: P1307.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三  1/ 1 17:33:15 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int main() {
    cin >> n;
    while (n) {
        k = k * 10 + n % 10;
        n /= 10;
    }
    cout << k << endl;
    return 0;
}
