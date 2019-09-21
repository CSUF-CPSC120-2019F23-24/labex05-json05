// Random Rectangle

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
  // Creates random seed each time program is run.
  unsigned seed = time(0);
  srand(seed);

  // Creates random length each time
  const int length = 40+1;
  int width = rand() % length;

  // Assigns # to width
  std::string pound;
  pound.assign(width, '#');

  // Displays rectangle.
  std::cout << pound << '\n';
  std::cout << pound << '\n';
  std::cout << pound << '\n';

  return 0;
}
