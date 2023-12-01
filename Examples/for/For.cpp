#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteration: " << i << std::endl;
    }

    int j = 0;
    for (; j < 5; j++) {
        std::cout << "Iteration: " << j << std::endl;
    }

    return 0;
}
