#include <iostream>

struct Param {
    int a;
    int b;
};
class Rectangle {
private:
    Param param;
public:
    Rectangle(){
        std::cout << "Введіть сторони прямокутника через пробіл " << std::endl;
        std::cin >> this->param.a >> this->param.b;
    }
    Rectangle(int a, int b){
        param.a = a;
        param.b = b;
    }
    Param getParam() const {
        return this->param;
    }
    double findSquare() {
        return this->param.a * this->param.b;
    }
    double findPerimeter;
};
Rectangle operator++(Rectangle rect1) {
    Param param = rect1.getParam();
    return Rectangle(++param.a, ++param.b);
}

Rectangle operator--(Rectangle rect1) {
    Param param = rect1.getParam();
    return Rectangle(--param.a, --param.b);
}
int main() {
    Rectangle rect1(5, 5);
    std::cout << rect1.findSquare();
    std::cout << std::endl;
    Rectangle rect2 = ++rect1;
    std::cout << rect2.findSquare();
    std::cout << std::endl;
    Rectangle rect3 = --rect1;
    std::cout << rect3.findSquare();
    return 0;
}