#include <iostream>
#include <vector>

int main() {
    int N;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> N;

    std::vector<int> A(N), B;

    std::cout << "Введіть елементи масиву A:\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    for (int i = 0; i < N; ++i) {
        if (A[i] != 0) {
            B.push_back(A[i]);
        }
    }

    std::cout << "Масив B без нульових елементів:\n";
    for (int x : B) {
        std::cout << x << " ";
    }

    return 0;
}
