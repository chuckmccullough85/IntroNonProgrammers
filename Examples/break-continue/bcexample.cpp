#include <iostream>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            // Using break to exit the loop when i is 5
            break;
        }
        if (i % 2 == 0) {
            // Using continue to skip the rest of the loop when i is even
            continue;
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
