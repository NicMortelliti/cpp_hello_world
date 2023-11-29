#include <iostream>

int add(int a, int b) {
    return a + b;
}

// Every C++ program must have a main() function
int main() {
    std::cout << "The sum is " << add(8, 2) << std::endl;

    return 0;  // Returning integer of zero typically means the program ran successfully
}