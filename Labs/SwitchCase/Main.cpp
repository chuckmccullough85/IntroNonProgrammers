#include <iostream>

int main() {
    int choice = 0;

    choice = 8;

    std::cout << "Enter a number between 1 and 3: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "You entered 1." << std::endl;
            break;
        case 2:
            std::cout << "You entered 2." << std::endl;
            break;
        case 3:
            std::cout << "You entered 3." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }

    return 0;
}
