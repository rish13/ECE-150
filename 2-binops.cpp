#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int x = 5;
    int a = x & 10;
    int b = x | 10;
    int c = x ^ 10;
    int d = ~x;
    int e = x << 10;
    int f = (1000*x) >> 10;

    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d;
    cout << ", e = " << e << ", f = " << f << endl;

    return 0;
}
