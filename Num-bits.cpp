#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double x;
	double y;
    
    cin >> x;
    

    y = log10(x)/log10(2);
	int output = (int) y;
    cout << x << " can be represented using " << output + 1 << " bits. " << endl;

    return 0;
}
