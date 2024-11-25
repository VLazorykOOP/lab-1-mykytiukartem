#include <iostream>
#include <limits>

int main() {
    int N, X;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> N;

    int* A = new int[N]; // Динамічне створення масиву
    std::cout << "Введіть елементи масиву A:\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::cout << "Введіть число X: ";
    std::cin >> X;

    int* pA = A; // Вказівник на поточний елемент масиву
    int maxNegative = std::numeric_limits<int>::min();
    bool found = false;

    for (int i = 0; i < N; ++i, ++pA) {
        if (*pA < X) {
            break; // Зупиняємося на першому елементі, меншому за X
        }
        if (*pA < 0 && *pA > maxNegative) {
            maxNegative = *pA;
            found = true;
        }
    }

    if (found) {
        std::cout << "Максимальне значення серед від’ємних елементів: " << maxNegative << "\n";
    } else {
        std::cout << "Від’ємні елементи не знайдені до першого елемента, меншого за X.\n";
    }

    delete[] A; // Звільнення пам'яті
    return 0;
}
