/*************************************************************************
	> File Name: P1022.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三  1/ 1 17:10:22 2020
 ************************************************************************/
#include <iostream>
#include <cstdio>
using namespace std;

char c, a;
int f = 1, now = 1, k, b, x;
bool r;
int main() {
    while (cin >> c) {
        if (c == '-') {b += now * f * x; x = 0; f = -1; r = 0;}
        if (c == '+') {b += now * f * x; x = 0; f = 1; r = 0;}
        if (c == '=') {b += now * f * x; x = 0; f = 1; now = -1; r = 0;}
        if (c >= 'a' && c <= 'z') {
            if (r) {
                k += now * f * x; x = 0;
            } else k += now * f;
            a = c; r = 0;
        }
        if (c >= '0' && c <= '9') {x = x * 10 + c - '0'; r = 1;}
    }
    b += now * f * x;
    double ans = double(-b * 1.0 / k);
    if (ans == -0.0) ans = 0;
    printf("%c=%.3lf", a, ans);
    return 0;
}
