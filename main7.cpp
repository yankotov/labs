#include <iostream>
#include <cmath>
struct TriangleParam {
    double a;
    double b;
    int deg;
};

class Triangle {
protected:

    TriangleParam triangle;
    double square;

    void setParam(int a, int b, int deg) {
        this->triangle.a = a;
        this->triangle.b = b;
        this->triangle.deg = deg;
    }
    TriangleParam getParam() {
        return triangle;
    }

public:
    Triangle(int a, int b, int deg){
        setParam(a, b, deg);
    }
    double getSquare() const {
        return square;
    }
    double findSquare() {
        double rad = triangle.deg * 3.14 / 180;
        square = sin(rad) * triangle.a * triangle.b;
        return square;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int deg) : Triangle(a, b, deg){
        setParam(a, b, deg);
    }
    double findSquare() {
        square = (triangle.a * triangle.b) / 2.0;
        return square;
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int a, int b, int deg) : Triangle(a, b, deg){
        setParam(a, b, deg);
    }
    double findSquare() {
        square = ((triangle.a * triangle.a) * sqrt(3.0)) / 4.0;
        return square;
    }
};

int main() {
    Triangle triangle3{10, 12, 60};
    std::cout << triangle3.findSquare();
    std::cout << std::endl;
    std::cout << triangle3.getSquare();
    std::cout << std::endl;
    RightTriangle triangle{10, 12, 60};
    std::cout << triangle.findSquare();
    std::cout << std::endl;
    std::cout << triangle.getSquare();
    std::cout << std::endl;
    EquilateralTriangle triangle1{10, 10, 60};
    std::cout << triangle1.findSquare() << std::endl;
    std::cout << triangle1.getSquare();


    return 0;
}