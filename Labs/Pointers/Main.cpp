#include <iostream>

// Function to demonstrate pass by value
void passByValue(int num) {
    num = 10;
}

// Function to demonstrate passing pointers
void passByPointer(int* numPtr) {
    *numPtr = 20;
}

int main(int argc, char** argv) {
    int num = 5;

    // Pass by value
    passByValue(num);
    std::cout << "After pass by value: " << num << std::endl;

    // Pass by pointer
    passByPointer(&num);
    std::cout << "After pass by pointer: " << num << std::endl;

    return 0;
}
