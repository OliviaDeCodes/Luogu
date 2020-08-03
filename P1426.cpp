/*************************************************************************
	> File Name: P1426.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三  1/ 1 16:09:00 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double v = 7, s, x, l = 0;
    cin >> s >> x;
    while (l < s - x) {
        l += v;
        v *= 0.98;
    }
    if (v *0.98 <= s + x - l) cout << 'y';
    else cout << 'n';
    return 0;
}
