
#include <iostream>
using namespace std;

/**
 * 拓展欧几里得算法
 * 对于 ax + by = gcd(a, b)
 * 求出整数 x, y 满足上述等式
*/
int gcdEx(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    } else {
        int r = gcdEx(b, a%b, x, y);
        int t = y;
        y = x - (a / b) * y;
        x = t;
        return r;
    }
}

int main(int argc, char* argv[]) {
    int x, y;
    gcdEx(252, 198, x, y);
    cout << "252*" << x << " + 198*" << y << " = 18" << endl;
    return 0;
}