#include <iostream>

int main() {
    int num = 10;

    if (num > 0) {
        std::cout << "The number is positive." << std::endl;

        if (num % 2 == 0) {
            std::cout << "The number is even." << std::endl;
        } else {
            std::cout << "The number is odd." << std::endl;
        }
    } else {
        std::cout << "The number is not positive." << std::endl;
    }

    return 0;
}
