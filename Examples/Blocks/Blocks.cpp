#include <iostream>

int main() {
    int x = 5;
    {
        int y = 10;
        std::cout << "Inside block: " << x << ", " << y << std::endl;

        int z = 15;
    }

    // y is not accessible here, outside the block
    std::cout << "Outside block: " << x << std::endl;

    return 0;
}
