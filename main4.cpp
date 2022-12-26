#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>


struct Student {
    Student() {}
    Student(int id, std::string name, int cs, int math, int physics, int programming) {
        this->id = id;
        this->name = name;
        this->cs = cs;
        this->math = math;
        this->physics = physics;
        this->programming = programming;
    }

    int id;
    std::string name;
    int cs;
    int math;
    int physics;
    int programming;

};

void printTable(Student students[], int amount) {
    std::cout << std::setw(5) << "N" << std::setw(20) << "Name" << std::setw(20) << "Informatics" << std::setw(20) << "Math" << std::setw(20) << "Physics" << std::setw(20)<< "Programming" << std::endl;
    for (int i = 0; i < amount; i++) {
        std::cout << std::setw(5) << students[i].id << std::setw(20) << students[i].name << std::setw(20) << students[i].cs << std::setw(20) << students[i].math << std::setw(20) << students[i].physics << std::setw(20) << students[i].programming << std::endl;
    }
}

int main() {
    Student students[10];
//    students[0] = {1, "Іванчук С.О.", 4, 3, 3, 4};
//    students[1] = {2, "Панченко І.А.", 5, 4, 4, 5};
//    students[2] = {3, "Заєць О.М.", 3, 4, 4, 4};
//    students[3] = {4, "Вельбицький П.О.", 4, 3, 3, 3};
//    students[4] = {5, "Сидоренко В.Р.", 2, 3, 3, 2};
//    students[5] = {6, "Кравченко З.І.", 3, 5, 4, 5};
//    students[6] = {7, "Якубів Р.Н.", 5, 4, 4, 3};
//    students[7] = {8, "Зоренко П.М.", 4, 2, 3, 3};
//    students[8] = {9, "Берестяк Г.С.", 4, 5, 5, 5};
//    students[9] = {10, "Дячик Н.С.", 5, 5, 4, 4};

    students[0] = {1, "Ivanchuk S.O.", 4, 3, 3, 4};
    students[1] = {2, "Panchenko I.A.", 5, 4, 4, 5};
    students[2] = {3, "Zaets O.M.", 3, 4, 4, 4};
    students[3] = {4, "Velbytskii P.O.", 4, 3, 3, 3};
    students[4] = {5, "Sidorenko B.P.", 2, 3, 3, 2};
    students[5] = {6, "Kravchenko Z.I.", 3, 5, 4, 5};
    students[6] = {7, "Yakubiv P.H.", 5, 4, 4, 3};
    students[7] = {8, "Zorenko P.M.", 4, 2, 3, 3};
    students[8] = {9, "Berestiak G.S.", 4, 5, 5, 5};
    students[9] = {10, "Diachik N.S.", 5, 5, 4, 4};

    printTable(students, 10);

}