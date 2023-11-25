#include <iostream>

int main() // Every C++ program must have a main() function
{
  int numbers[] = {1, 2, 3, 4, 5};
  std::cout << "The number is "
            << numbers[0] << std::endl;

  return 0; // Returning integer of zero typically means the program ran successfully
}