#include <iostream>

int main() {
    int count = 0;

    do {
        std::cout << "Count: " << count << std::endl;
        count++;
    } while (count < 5);

    return 0;
}
