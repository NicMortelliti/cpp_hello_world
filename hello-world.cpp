#include <iostream>

int main() // Every C++ program must have a main() function
{
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (auto number : numbers)
  {
    if (number == 5)
    {
      std::cout << number << std::endl;
      break;
    }
  }

  return 0; // Returning integer of zero typically means the program ran successfully
}