#include <iostream>
#include <cmath>

double ctg(double x) {
    return cos(x) / sin(x);
}

int main() {
    double x, c, y;
    std::cin >> x;
    std::cin >> c;
    if(c > 9 && x < -1) {
        y = +(cbrt(c * -(x)));
    } else if(c < 0 && -1 < x && x <= 1) {
        y = ctg(c / x);
    } else if(c > 0 && x < c) {
        y = log(pow(c, 2) - pow(x, 2));
    }
    std::cout << y << std::endl;
    return 0;
}
