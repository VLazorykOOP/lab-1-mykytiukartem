#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Введіть значення n (n ≤ 200): ";
    std::cin >> n;

    if (n > 200 || n <= 0) {
        std::cerr << "Помилка: n має бути в межах 1 ≤ n ≤ 200.\n";
        return 1;
    }

    int size = 2 * n;
    std::vector<double> A(size);

    std::cout << "Введіть " << size << " елементів масиву A:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> A[i];
    }

    // Обчислення середнього арифметичного перших n елементів
    double sumFirstPart = 0;
    for (int i = 0; i < n; ++i) {
        sumFirstPart += A[i];
    }
    double average = sumFirstPart / n;

    // Сума чисел, які перевищують середнє арифметичне
    double sum = 0;
    for (int i = n; i < size; ++i) {
        if (A[i] > average) {
            sum += A[i];
        }
    }

    std::cout << "Сума чисел з другої половини, які перевищують середнє арифметичне перших n елементів: " << sum << "\n";

    return 0;
}
