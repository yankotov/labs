//
// Created by Stas on 24.12.2022.
//

#include <iostream>

using namespace std;

int main()
{
    /* Створимо масив та заповнимо його значенням */
    int n = 5;
    double mass[] = {1.3, 6.3, 2.4, -3.6, -2.5};

    /* Створимо змінну для збереження добутку */
    double productValue = 1; // Добуток (by default 1)

    /* Проходимо по всім елементам в масиві */
    for (int i = 0; i < n; ++i) {
        // Винесемо елемент в змінну
        double currentElementValue = mass[i];
        // Перерахуємо добуток елементів масиву з поточним значенням
        productValue = productValue * currentElementValue;
    }

    cout << endl << "Product of array elements = " << productValue;




    return 0;
}