#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main() {
    double u, x;
    cout <<"Введіть х = ";
    cin >> x;
    u = log(fabs(1 - x)) + (tan(x) - sin(x) * sin(x)) / (1 - sqrt(log(x)));
    cout << "u = " << u << endl;

    return 0;
}